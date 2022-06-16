
#include <string.h>
#include "person.hpp"

using namespace std;

int main(int argc,char* argv[])
{
    person person("Tom",21);

    cout << person.introduce() << endl;

    return 0;
}