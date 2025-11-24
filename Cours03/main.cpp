#include <iostream>
#include <string>

// Suffixes
// u, U (non signé)
//f, F (flottant)
//l, L (long int, long dougle)
//ll, LL (long long int)

// Préfixes
// 0b (binaire)
// 0 (octal)
// 0x (hexadécimal)

// Séparateur
// 1'000'000 == 1 millions

// Auto: Permet de au compilateur de choisir le type d'une variable

int main()
{
    bool    is_secure{};
    int some_number{};
    int forty_two{42};
    float   forteen{14.0f};
    char    c{'c'};
    std::string string{"Hello World!"};
    const std::string constante{"I am a constante"};

    std::cout << "Bool: " << is_secure << std::endl;
    std::cout << "Int1: " << some_number << std::endl;
    std::cout << "Int2: " << forty_two << std::endl;
    std::cout << "Float: " << forteen << std::endl;
    std::cout << "Char: " << c << std::endl;
    std::cout << "String: " << string << std::endl;
    std::cout << "Const: " << constante << std::endl;
    return (0);
}