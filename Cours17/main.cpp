#include <iostream>
#include <string>
#include "window.hpp"


int main()
{
    Window app{"Mon applicatoin graphique", -9};
    std::cout << app.getTitle() << std::endl;
    app.setTitle("Mon nouveau titre");
    std::cout << app.getTitle() << std::endl;
    return (0);
}