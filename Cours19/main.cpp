#include <iostream>
#include <string>
#include "someone.hpp"
#include "english.hpp"
#include "indonesian.hpp"

int main()
{
    Someone so{"Anonymous"};
    English en{"Anonymous"};
    Indonesian in{"Anonymous"};

    so.sayGoodNight();
    en.sayGoodNight();
    in.sayGoodNight();
    
    return (0);
}