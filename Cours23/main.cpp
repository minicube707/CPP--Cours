#include <iostream>
#include <string>
#include <list>

/*
    fill()  : rempli le tableau avec le chiffre donne
    at()    : avoir l'element a l'index donne
    size()  : donne la taille du tableau
    empty() : verifie si un tableau est vide
    front() : retourne le premier element
    back()  : retourne le dernier element
    append()    : ajoute le nombre d'occurence a la fin
    clear() : vide la chaine
*/

int main()
{
    std::list<std::string> li{"dragon", "lion", "chat"};
    std::cout << "Premier: " << li.front() << std::endl;
    std::cout << "Dernier: " << li.back() << std::endl;
    std::cout << "Taille de la list: " << li.size() << std::endl;

    std::cout << ""  << std::endl;
    for (std::string string: li)
        std::cout << string << std::endl;

    li.push_front("chien");
    li.push_back("serpent");

    std::cout << ""  << std::endl;
    for (std::string string: li)
        std::cout << string << std::endl;

    li.pop_front();
    li.pop_back();

    std::cout << ""  << std::endl;
    for (std::string string: li)
        std::cout << string << std::endl;

    li.sort();
    std::cout << "\nList trie   "  << std::endl;
    for (std::string string: li)
        std::cout << string << std::endl;

    li.clear();
    std::cout << ""  << std::endl;
    for (std::string string: li)
        std::cout << string << std::endl;

    if (li.empty())
        std::cout << "La liste est vide" << std::endl;
    return (0);
}