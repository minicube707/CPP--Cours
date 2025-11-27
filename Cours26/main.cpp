#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string sentence{"Bonjour tout le monde"};
    std::vector<int> vec{1, 2, 3, 4, 5};

    std::string::iterator it{std::begin(sentence)};
    //std::string::const_iterator it{std::begin(sentence)}; (mode read online)

    std::cout << sentence << std::endl;
    std::cout << *it << std::endl;
    std::cout << *it << std::endl;

    *it = 'T';
    std::cout << *it << std::endl;
    std::cout << sentence << std::endl;

    it++;
    std::cout << *it << std::endl;
    it = std::next(it);
    std::cout << *it << std::endl;

    it = std::end(sentence);
    std::cout << *it << std::endl;

    std::cout << "" << std::endl;
    for (auto i = std::begin(vec); i != std::end(vec); i = std::next(i))
        std::cout << *i << std::endl;

    std::cout << "" << std::endl;
    for (auto i = std::begin(sentence); i != std::end(sentence); i = std::next(i))
        std::cout << *i << std::endl;   
    return (0); 
} 