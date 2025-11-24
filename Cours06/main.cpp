#include <iostream>
#include <string>

int main()
{

    bool is_empty = true;

    if (is_empty == true)
        std::cout << "Is empty" << std::endl;
    if (is_empty)
        std::cout << "Is empty" << std::endl;
    
    is_empty = false;
    if (is_empty == false)
        std::cout << "Is not empty" << std::endl;
    if (!is_empty)
        std::cout << "Is not empty" << std::endl;

    int number;    

    std::cout << "Tapez un nombre entier: ";
    std::cin >> number;
    
    if (number < 42)
        std::cout << "Number est strictement plus petit que 42" << std::endl;
    else if (number > 42)
        std::cout << "Number est strictement plus grand que 42" << std::endl;
    else
        std::cout << "Number est egal a 42" << std::endl;

    std::cout << "Tapez un nombre entier entre 0 et 5: ";
    std::cin >> number;
    switch (number)
    {
        case (0):
            std::cout << "Vous entrer 0" << std::endl;
            break;
        case (1):
            std::cout << "Vous entrer 1" << std::endl;
            break;
        case (2):
            std::cout << "Vous entrer 2" << std::endl;
            break;
        case (3):
            std::cout << "Vous entrer 3" << std::endl;
            break;
        case (4):
            std::cout << "Vous entrer 4" << std::endl;
            break;
        case (5):
            std::cout << "Vous entrer 5" << std::endl;
            break; 
        default:
            std::cout << "Vous n'avez pas entrer un chiffre entre 0 et 5" << std::endl;
            break;
            
    }
    return (0);
}