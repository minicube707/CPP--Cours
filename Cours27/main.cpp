#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

/*
    std::fill()     : rempli le container
    std::equal()    : compare deux container
    std::find()     : cherche une valeur
    std::search()   : cherche un sub string
    std::sort()     : trie les elements
    std::reverse()  : inverse l'ordre des elementd du container
    std::replace()  : remplace un element par un autre
*/


void print_element(char c)
{
    std::cout << "Je suis dans la fonction " << c << std::endl;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::vector<int> vec2{1, 2, 3, 4, 5};
    std::vector<int> vec3{1, 2, 3, 4, 5};

    std::cout << "" << std::endl;
    for (int i: vec)
        std::cout << i << std::endl;

    std::fill(std::begin(vec), std::end(vec), 42);

    std::cout << "" << std::endl;
    for (int i: vec)
        std::cout << i << std::endl;

    if(!std::equal(std::begin(vec), std::end(vec), std::begin(vec2), std::end(vec2)))
        std::cout << "Les container vec et vec2 sont les differents" << std::endl;

    if(std::equal(std::begin(vec3), std::end(vec3), std::begin(vec2), std::end(vec2)))
        std::cout << "Les container vec2 et vec3 sont les meme" << std::endl;

    auto begin = std::begin(vec2);
    auto end = std::end(vec2);

    std::cout << "" << std::endl;
    if (std::find(begin, end, 3) != end)
        std::cout << "Element trouve" << std::endl;

    std::string string{"Bonjour tout le monde"};
    std::string search_term{"le"};
    
    std::cout << "" << std::endl;
    if(std::search(std::begin(string), std::end(string), std::begin(search_term), std::end(search_term)) != std::end(string))
        std::cout << "Le substring est trouve" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Il y a " << std::count(std::begin(string), std::end(string), 'o') << " d'occurences de 'o' dans " << string << std::endl;
    
    std::replace(std::begin(string), std::end(string), 'o', 'O');
    std::cout << string << std::endl;

    std::cout << "" << std::endl;
    std::sort(std::begin(string), std::end(string));
    for (char c: string)
        std::cout << c << std::ends;

    std::cout << "" << std::endl;
    std::reverse(std::begin(string), std::end(string));
    for (char c: string)
        std::cout << c << std::ends;

    std::for_each(std::begin(string), std::end(string), print_element);
    return (0); 
} 