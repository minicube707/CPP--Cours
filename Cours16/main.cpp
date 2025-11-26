#include <iostream>
#include <string>
#include "window.hpp"


int main()
{
    Window app{};
    Window newapp{"Mon programme GUI", 42, 24};
    app.run();
    return (0);
}