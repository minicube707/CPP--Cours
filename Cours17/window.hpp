#include <iostream>
#include <string>

#ifndef WINDOW_HPP
# define WINDOW_HPP


class Window
{
    public:
        Window(std::string title, int size);
        std::string getTitle() const;
        void setTitle(const std::string title);
        void setSize(int size);
        
    private:
        std::string title;
        int size;

};

#endif