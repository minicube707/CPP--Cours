
#include <iostream>
#include <string>
#include <list>

#include "number.hpp"
#include "datacontainer.hpp"

int main()
{
    int r1 = sum(4, 7);
    std::cout << r1 << std::endl;
    
    float r2 = sum(3.14, 4.2);
    std::cout << r2 << std::endl;

    std::cout << "" << std::endl;
    DataContainer<int> dc1{25};
    std::cout << dc1.getData() << std::endl;

    DataContainer<std::string> dc2{"Hello"};
    std::cout << dc2.getData() << std::endl;
    return (0);
}