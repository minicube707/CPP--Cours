
#include "unit.hpp"
#include "character.hpp"
#include "quest.hpp"
#include <iostream>

int main()
{
    Unit npc{114, "Forgeron Gibbons"};

    std::cout << npc.getName() << std::endl;
    std::cout << npc.getId() << std::endl;

    Character c{16, "Jason", 1};

    std::cout << c.getName() << std::endl;
    std::cout << c.getId() << std::endl;
    std::cout << c.getLevel() << std::endl;

    Quest q{"Tourte au sanglier", "Raptorte 5 morceaux de viande"};
    q.show();

}