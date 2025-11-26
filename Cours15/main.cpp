#include <iostream>
#include <string>
#include "point.hpp"

/*
    struct  : donnees public (par defaut)
    class   : donnes privees (par defaut)

    Niveaux d'acces : public, private, protected
*/

struct Point
{
    int x;
    int y;
};


int main()
{
    Point p{145, 38};

    std::cout << "\nStructure" <<std::endl;
    std::cout << "(" << p.x << "," << p.y << ")" << std::endl;
    p.x = 42;
    std::cout << "(" << p.x << "," << p.y << ")" << std::endl;

    std::cout << "\nClass" <<std::endl;
    Point2 p2{};
    Point2 p3{p2};
    
    return (0);
}