#include "window.hpp"

Window::Window(std::string t, int width, int height) : title(t)
{
        std::cout << "Ma fenetre: " << title << std::endl;
        std::cout << "De taille: " << width << " " << height << std::endl;
}

void Window::run() const
{
       std::cout << "Affichage...." << std::endl; 
}