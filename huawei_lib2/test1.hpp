#include <iostream>

using namespace std;

void encode(uint16_t x, byte *p)
{
    for (size_t i=sizeof(uint16_t);i>0;i--)
    {
        *p++=static_cast<byte>(x>>(i-1)*8);
    }

}
uint16_t decode(const byte* p)
{
    static_assert(is_unsigned_v<uint16_t>);
    uint16_t x=0;
    for(size_t i=sizeof(x);i>0;i--)
    {
        x|=to_integer<uint16_t>(*p++)<<((i-1)*8);
    }
    return x;
}