#include <iostream>
#include <string>

int main()
{

    int i = 0;
    while (i < 5)
    {
        std::cout << "i= " << i << std::endl;
        i++;
    }
    
    std::cout << ""  << std::endl;
    while (i)
    {
        std::cout << "i= " << i << std::endl;
        i--;
    }

    std::cout << ""  << std::endl;
    for (int j = 0; j < 5; j++)
        std::cout << "j= " << j << std::endl;

        
    std::string sentence = "Hello World!";
    std::cout << ""  << std::endl;
    for (char letter: sentence)
        std::cout << letter << std::endl;
    return (0);
}