#include <iostream>
#include <string>

int main()
{
    std::cout << "Good : " << std::cin.good() << std::endl;
    std::cout << "Fail : " << std::cin.fail() << std::endl;
    std::cout << "Bad : " << std::cin.bad() << std::endl;

    std::cout << "Tapez un nombre entier: ";

    int number;
    std::cin >> number;
   
    std::cout << "Nombre saisi : " << number << std::endl;
    
    std::cout << "Good : " << std::cin.good() << std::endl;
    std::cout << "Fail : " << std::cin.fail() << std::endl;
    std::cout << "Bad : " << std::cin.bad() << std::endl;

    std::string name;
    std::string null;

    //std::cin >> std::ws; // retire les espaces vide

    std::getline(std::cin, null);  // vide le buffer stdin
    std::cout << "Votre nom : ";
    std::getline(std::cin, name);
    std::cout << "Votre nom est  " << name << std::endl;

    return (0);
}