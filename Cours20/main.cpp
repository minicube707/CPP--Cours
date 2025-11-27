#include <iostream>
#include <string>
#include <array>
#include <vector>

#include "english.hpp"

/*
    std::array : \
    fill()  : rempli le tableau avec le chiffre donne
    at()    : avoir l'element a l'index donne
    size()  : donne la taille du tableau
    empty() : verifie si un tableau est vide
    front() : retourne le premier element
    back()  : retourne le dernier element
    push_back() : ajoute un element a la fin
    pop_back()  : retire le dernier element
*/


int main()
{
    /*=====================*/
    /*Tableau (taille fixe)*/
    /*=====================*/

    std::array<int, 5> arr{};
    
    std::cout << "" << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;
    
    
    std::array<int, 5> arr2{1, 2, 3, 4, 5};
    std::cout << "" << std::endl;
    for (int val: arr2)
        std::cout << val << std::endl;
    
    arr2[0] = 10;
    std::cout << "" << std::endl;
    for (int val: arr2)
        std::cout << val << std::endl;

    std::cout << "" << std::endl;
    std::cout << arr2[0] << std::endl;
    std::cout << arr2.at(0) << std::endl;

    arr2.fill(2);
    std::cout << "" << std::endl;
    for (int val: arr2)
        std::cout << val << std::endl;
    
    std::cout << "" << std::endl;
    std::cout << "Tabeleau de taille: " << arr2.size() << std::endl;

    if (arr2.empty())
        std::cout << "Le tableau est vide" << std::endl;
    else
        std::cout << "Le tableau n'est vide" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Le premier element est" << arr2.front() << std::endl;
    std::cout << "Le dernier element est" << arr2.back() << std::endl;

    /*=========================*/
    /*Vector (taille dynamique)*/
    /*=========================*/

    std::vector<std::string> arr3{};
    std::cout << "" << std::endl;
    if (arr3.empty())
        std::cout << "Le vecteur est vide" << std::endl;
    else
        std::cout << "Le vecteur n'est vide" << std::endl;

    arr3.push_back("hello world!");
    std::cout << "" << std::endl;
    for (std::string string: arr3)
        std::cout << string << std::endl;

    English eng1{"Rick"};
    English eng2{"Morty"};
    std::vector<English> arr4{};
    arr4.push_back(eng1);
    arr4.push_back(eng2);
    
    for (English someone: arr4)
        someone.sayGoodNight(); 
    return (0);
}