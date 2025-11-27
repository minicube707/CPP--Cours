#include <iostream>
#include <string>
#include <stack>

/*
    fill()  : rempli le tableau avec le chiffre donne
    at()    : avoir l'element a l'index donne
    size()  : donne la taille du tableau
    empty() : verifie si un tableau est vide
    push()  : ajoute un element au debut
    pop()   : retire l'element du debut
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
    statck.pop();

    for (int i = 0; i < 5; i++)
        statck.push(i);
    
    std::cout << "" << std::endl;
    while (!statck.empty())
    {
        std::cout << statck.top() << std::endl;
        statck.pop();
    }
    return (0);
}