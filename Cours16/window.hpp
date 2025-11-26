#include <iostream>
#include <string>

#ifndef WINDOW_HPP
# define WINDOW_HPP


class Window
{
    public:
        Window() = default;
        Window(std::string title, int width, int height);

    private:
        std::string title;
        int width;
        int height;
};

#endif