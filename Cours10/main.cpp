#include <iostream>
#include <string>
#include <cassert>

void Create_Player(std::string name, int level)
{
    //assert(level > 0 && "Error: niveau negatif ou null");

    std::cout << "Creation de " << name << ", de niveau " << level << std::endl;
}

int main()
{
    int level;

    std::cout << "Tapez un level: ";
    try
    {
        // Active les exceptions
        std::cin.exceptions(std::ios::failbit | std::ios::badbit);
        std::cin >> level;

        if (level <= 0)
            throw std::runtime_error("Le niveau doit être > 0");
    }
    catch(const std::exception& err)
    {
        std::cerr << "Erreur : " << err.what() << std::endl;
        return 1;
    }

    std::cout << "Niveau valide : " << level << std::endl;
    Create_Player("Xavier", level);
    return 0;
}