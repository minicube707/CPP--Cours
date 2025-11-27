
#include "someone.hpp"

Someone::Someone(const std::string& name) noexcept: _name(name)
{
}

void Someone::sayGoodNight() const noexcept
{
    std::cout << _name << ": ..." << std::endl;
}