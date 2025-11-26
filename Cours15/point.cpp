#include "point.hpp"
#include <iostream>

Point2::Point2()
{
    std::cout << "Creation d'un point" << std::endl;
}

//Destructeur
Point2::~Point2()
{
    std::cout << "Destruction d'un point" << std::endl;
}

//Constructuer de copie
Point2::Point2(const Point2& p)
{
    std::cout << "Copie d'un point" << std::endl;
}

