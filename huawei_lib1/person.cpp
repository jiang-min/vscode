#include "person.hpp"
#include <sstream>

person::person(const std::string &name, const uint16_t age):name(name),age(age)
{

}
std::string person::introduce() const noexcept
{
    std::stringstream stream;

    stream<<"my name is "<< name <<". I am " << age << " years old."

    return stream.str();
}