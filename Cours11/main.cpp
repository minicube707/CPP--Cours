#include <iostream>
#include <string>

enum NaturalElement
{
    earth,
    air,
    fire,
    water
};

int main()
{
    NaturalElement ne1 = earth;
    NaturalElement ne2 = air;
    NaturalElement ne3 = fire;
    NaturalElement ne4 = water;
    
    std::cout << "Premier element " << ne1 << std::endl;
    std::cout << "Deuxiene element " << ne2 << std::endl;
    std::cout << "Troisieme element " << ne3 << std::endl;
    std::cout << "Quatrime element " << ne4 << std::endl;
    std::cout << "" << std::endl;

    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
            std::cout << "earth" << std::endl;
        if (i == 1)
            std::cout << "air" << std::endl;
        if (i == 2)
            std::cout << "fire" << std::endl;
        if (i == 3)
            std::cout << "water" << std::endl;
    }
    return (0);
}