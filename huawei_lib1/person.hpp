#pragma once //头文件防冲突,放在头文件里，不要放在main文件
#include<string.h>
#include <sstream>
#include <iostream>

class person
{
    public:
    person(const std::string& name, const uint16_t age);

    std::string person::introduce() const noexcept;
    
    //std::string getname()const noexcept;
    
    private:
    std::string name;
    uint16_t age;
};