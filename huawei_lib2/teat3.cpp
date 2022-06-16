#include <cstddef>
#include <iostream>

using namespace std;

std::byte b1{42};

int main()
{
    cout << std::to_integer<int>(b1) << endl;
}

