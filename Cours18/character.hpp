
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "unit.hpp"

class Character : public Unit
{
    
    using Unit::Unit;
    
    public:
        Character() = delete;
        Character(int id, const std::string& name, int level) noexcept;
        int getLevel() const;

    private:
        int _level;

};


#endif