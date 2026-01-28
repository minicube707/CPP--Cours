
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "unit.hpp"

//Character hérite de Unit
//Tout ce qui est public et protected dans Unit reste accessible dans Character
class Character : public Unit
{
    //Elle sert à hériter des constructeurs de la classe mère.
    //Tous les constructeurs publics de Unit sont disponibles dans Character
    using Unit::Unit;
    
    public:
        Character() = delete;
        Character(int id, const std::string& name, int level) noexcept;
        int getLevel() const;

    private:
        int _level;

};


#endif
