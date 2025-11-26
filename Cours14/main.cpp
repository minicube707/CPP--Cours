#include <iostream>
#include <string>

struct Product
{
    std::string name;
    float price;
    bool available;
};

int main()
{
    struct Product P{"Papier toilette", 1.29, true};
    std::cout << "Name: " <<  P.name <<std::endl;
    std::cout << "Price: " <<  P.price <<std::endl;
    std::cout << "Available: " <<  P.available <<std::endl;

    return (0);
}