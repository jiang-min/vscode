template<std::size_t N>
#include <iostream>
#include <array>
#include <cstddef>


constexpr auto bytearray (const int (&nums)[N]) noexcept
{
    std::array<std::byte,N> bytes{};

    for(std::size_t i=0; i < N; i++)
    {
        bytes[i]=static_cast<std::byte>(nums[i]);
    }
    return bytes;
}



