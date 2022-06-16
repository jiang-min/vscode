#pragma once

#include "person.hpp"

class student : public person
{

public:
    student(const std::string& name, const uint16_t age, const uint16_t klass);

    std::string introduce(const std::string &) const noexcept override;

private:
    uint16_t klass;
};

