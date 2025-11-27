#include <iostream>
#include <string>
#include <stack>

/*
    std::array : \
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
    
    std::stack<int> statck;

    std::cout << "La taille de la pile est " << statck.size() << std::endl;

    if (statck.empty())
        std::cout << "La pile est vide " << std::endl;

    statck.push(42);
    std::cout << "Top: " << statck.top() << std::endl;
    statck.push(37);
    std::cout << "Top: " << statck.top() << std::endl;
    statck.pop();
    std::cout << "Top: " << statck.top() << std::endl;
    return (0);
}