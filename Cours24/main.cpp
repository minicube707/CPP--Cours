#include <iostream>
#include <string>
#include <map>
#include <unordered_map>


/*
    at()    : avoir l'element a l'index donne
    size()  : donne la taille du tableau
    empty() : verifie si un tableau est vide
    erase() : retire l'element de la cle donne de la map
    clear() : vide la chaine
*/

int main()
{
    std::unordered_map<int, std::string> um{{1, "Chat"}, {3, "Cheins"}, {42, "Sepent"}, {37, "Lions"}};

    std::cout << "" << std::endl;
    for (const auto& [key, value]: um)
        std::cout << "Cle: " << key << " Value: " << value << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Cle: 1 " << " Value: " << um[1] << std::endl;
    std::cout << "Cle: 1 " << " Value: " << um.at(1) << std::endl;
    um[1] = "Dragon";
    std::cout << "Nouvelle valeur" << std::endl;
    std::cout << "Cle: 1 " << " Value: " << um[1] << std::endl;
    um[24] = "Aligator";

    std::cout << "" << std::endl;
    for (const auto& [key, value]: um)
        std::cout << "Cle: " << key << " Value: " << value << std::endl;

    std::cout << "Taille de la list: " << um.size() << std::endl;

    std::cout << "Taille de la list: " << um.size() << std::endl;
    um.erase(3);
    std::cout << "" << std::endl;
    for (const auto& [key, value]: um)
        std::cout << "Cle: " << key << " Value: " << value << std::endl;

    std::cout << "Taille de la list: " << um.size() << std::endl;
    um.clear();
    std::cout << "" << std::endl;
    for (const auto& [key, value]: um)
        std::cout << "Cle: " << key << " Value: " << value << std::endl;
    if (um.empty())
        std::cout << "La map est vide" << std::endl;
    return (0);
}