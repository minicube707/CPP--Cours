#include "window.hpp"

Window::Window(std::string t, int s) : title(t), size(s)
{
        std::cout << "Creation d'une fenetre" << std::endl;

        this->setSize(size);
}

std::string Window::getTitle() const
{
        return this->title;
}

void Window::setTitle(std::string title)
{
        this->title = title;
}

void Window::setSize(int size)
{       
        if (size < 0)
        {
                std::cout << "Error: size can't be negatif" << std::endl;
                return ;
        }
        this->size = size;
}