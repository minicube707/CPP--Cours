
#include "quest.hpp"
#include <iostream>
# include <string>

Quest::Quest(const std::string& name, const std::string& description) noexcept :_name(name), _description(description)
{
    _status = QuestStatus::disabled;
}

void Quest::show() const noexcept
{
    std::cout << "Name: " << _name << std::endl;
    std::cout << "Description: " << _description << std::endl;
}