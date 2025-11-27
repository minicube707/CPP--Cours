#include <iostream>
#include <string>

/*
    'H', 'e', 'l', 'l', 'o', '\0'
    std::string
    std::string_view    
*/

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
    std::string s{"Hello World!"};
    std::cout << s << std::endl;
    std::cout << "Premier character: " << s[0] << std::endl;
    std::cout << "Premier character: " << s.at(0) << std::endl;
    s.append(4, '!');
    std::cout << s << std::endl;

    std::cout << "" << std::endl;
    std::cout << s.substr(3) << std::endl;
    std::cout << s.substr(5, 3) << std::endl;
    
    std::string s1{"aaa"};
    std::string s2{"bbb"};

    std::cout << "" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    s1.swap(s2);

    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    return (0);
}