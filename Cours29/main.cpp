#include <iostream>
#include "time.hpp"

int main()
{
    jc::time t1{14, 25, 56};
    jc::time t2{3, 11, 3};

    std::cout << "Hours: " << t1 << std::endl;
    std::cout << "Hours: " << t2 << std::endl;

    std::cout << t1 + t2 << std::endl;
    
    std::cout << t1 + 10 << std::endl;
    std::cout << 10 + t1 << std::endl;
    return 0;
}