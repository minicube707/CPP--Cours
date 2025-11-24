#include <iostream>
#include <string>
#include <fstream>

/*
    std::ios::out, std::ios::in (stdin, strouit)
    std::ios::binary (binary)

    std::ios::trunc (emppty file if exist)
    std::ios::ate (at the end)
    std::ios::app (append mode)
*/

int main()
{
    //Ecriture
    std::fstream f("txt.txt"); //std::ios::in

    if (!f.is_open())
    {
        std::cout << "Error: fichier non ouvert" << std::endl;
        return (1);
    }

    std::string name{""};
    f >> name;
    std::cout << name << std::endl;

    std::string line{""};
    while (std::getline(f >> std::ws, line))
        std::cout << line << std::endl;

    f.close();

    //Lecture
    std::ofstream w("data.txt"); //std::ios::out
    if (w.is_open())
    {
        w << "Hello World!";
    }
    w.close();
    return (0);
}