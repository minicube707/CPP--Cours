
#ifndef QUEST_HPP
# define QUEST_HPP

# include "queststatus.hpp"
# include <string>

class Quest
{
    public:
        Quest() = delete;
        Quest(const std::string& name, const std::string& description) noexcept;
        void show() const noexcept;

    private:
       std::string _name;
       std::string _description;
       QuestStatus _status;
};

#endif