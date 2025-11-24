#include <iostream>
#include <string>

void printHelloWorld()
{
    std::string sentence = "Hello World!";
    std::cout << "Phrase " << sentence << std::endl;
    std::cout << "Taille de la phrase " << sentence.length() << std::endl;
    std::cout << "" << std::endl;
}

void printab(int a, int b)
{
    std::cout << "" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}

int add(int a, int b)
{
    int res;
    res = a + b;
    std::cout << "SUM " << res << std::endl;
    return (res);
}

void set_number(int &a, int &b)
{
    a = 2;
    b = 4;
}

void printSum(int a, int b)
{
    std::cout << "Sum " << a + b << std::endl;
}

void printSum(float a, float b)
{
    std::cout << "Sum " << a + b << std::endl;
}

int main()
{
    printHelloWorld();

    int res = 0;
    for (int i = 0; i < 5; i++)
        res = add(i, res);

    //Utilisation de reference
    int num = 42;
    int &refnum = num;

    std::cout << "" << std::endl;
    std::cout << "Variable num " << num << std::endl;
    std::cout << "Refernce num " << refnum << std::endl;

    num = 21;

    std::cout << "" << std::endl;
    std::cout << "Variable num " << num << std::endl;
    std::cout << "Refernce num " << refnum << std::endl;

    
    int a = 0;
    int b = 0;

    printab(a, b);
    set_number(a, b);
    printab(a, b);


    //Surcharge
    std::cout << "" << std::endl;
    printSum(3, 5);
    printSum(3.1415f, 1.61803f);
    return (0);
}