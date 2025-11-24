#include <iostream>
#include <string>

int main()
{
    std::cout << "Opérations arithnetique" << std::endl;
    std::cout << "1 + 1 = " << 1 + 1 << std::endl;
    std::cout << "1 - 1 = " << 1 - 1 << std::endl;
    std::cout << "1 * 0 = " << 1 * 0 << std::endl;
    std::cout << "4 / 2 = " << 4 / 2 << std::endl;

    
    std::cout << "\nOpérations booleen" << std::endl;
    bool result = 1 && 1;
    std::cout << "1 && 1 = " << result << std::endl;
    result = 1 && 0;
    std::cout << "1 && 0 = " << result << std::endl;
    result = true || 0;
    std::cout << "true || 0 = " << result << std::endl;
    result = false || 0;
    std::cout << "false || 0 = " << result << std::endl;
    result = !true;
    std::cout << "!true = " << result << std::endl;

    std::cout << "\nOpérations comparaison" << std::endl;
    result = 1 < 2;
    std::cout << "1 < 2 = " << result << std::endl;
    result = 1 <= 2;
    std::cout << "1 <= 2 = " << result << std::endl;
    result = 1 > 2;
    std::cout << "1 > 2 = " << result << std::endl;
    result = 1 >= 2;
    std::cout << "1 >= 2 = " << result << std::endl;
    result = 1 == 2;
    std::cout << "1 == 2 = " << result << std::endl;
    result = 1 == 1;
    std::cout << "1 == 1 = " << result << std::endl;
    result = 1 != 1;
    std::cout << "1 != 1 = " << result << std::endl;

    std::cout << "\nOpérations incrementatoin" << std::endl;
    int num{42};
    std::cout << "num = " << num << std::endl;
    std::cout << "num++ = " << num++ << std::endl;
    std::cout << "num = " << num << std::endl;
    std::cout << "num-- = " << num-- << std::endl;
    std::cout << "num = " << num << std::endl;
    std::cout << "++num = " << ++num << std::endl;
    std::cout << "--num = " << --num << std::endl;

    std::cout << "" << std::endl;
    std::cout << "num = " << num << std::endl;
    num +=1;
    std::cout << "num += 1 = " << num << std::endl;
    num -=1;
    std::cout << "num- = 1 = " << num << std::endl;
    num /=2;
    std::cout << "num /= 2 = " << num << std::endl;
    num *=2;
    std::cout << "num *= 2 = " << num << std::endl;
    num %=2;
    std::cout << "num %= 2 = " << num << std::endl;
    return (0);
}