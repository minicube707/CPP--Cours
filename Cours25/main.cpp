#include <iostream>
#include <string>
#include <unordered_set>
#include <set>

/*
    insert(): ajoute un element a l'ensemble
    size()  : donne la taille du tableau
    empty() : verifie si un tableau est vide
    clear() : vide la chaine
    erase() : retire l'element de l'ensemble
*/

int main()
{
    std::unordered_set<int> s{1, 2, 3, 42, -9};

    std::cout << ""  << std::endl;
    for (const auto& val: s)
        std::cout << val << std::endl;

    std::cout << ""  << std::endl;
    s.insert(37);
    for (const auto& val: s)
        std::cout << val << std::endl;
    
    std::cout << ""  << std::endl;
    s.insert(42);
    for (const auto& val: s)
        std::cout << val << std::endl;
    
    s.insert({9, 8, 7, 6});
    std::cout << ""  << std::endl;
    for (const auto& val: s)
        std::cout << val << std::endl;
    
    s.erase(37);
    std::cout << ""  << std::endl;
    for (const auto& val: s)
        std::cout << val << std::endl;

    std::cout << ""  << std::endl;
    if (s.find(42) != std::end(s))
        std::cout << "42 est dans l'ensemble" << std::endl;
    if (s.find(37) == std::end(s))
        std::cout << "37 n'est dans l'ensemble" << std::endl;

    s.clear();
    std::cout << ""  << std::endl;
    for (const auto& val: s)
        std::cout << val << std::endl;

    if (s.empty())
        std::cout << "L'ensemble est vide" << std::endl;

    return (0);
}