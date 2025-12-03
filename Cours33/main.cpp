#include <iostream>
#include <thread>
#include <future>

/*
    Promesse (promise): producteur
    Futur (futur): consomateur
*/


void getNumber1(std::promise<int>&& result)
{
    result.set_value(42);
}

int getNumber2()
{
    return (8086);
}

int main()
{
    std::promise<int> somePromise1;
    std::future<int> someFuture1 {somePromise1.get_future()};

    std::thread th{getNumber1, std::move(somePromise1)};

    int returnValue{someFuture1.get()};
    th.join();
    std::cout << "Valeur retourne: " << returnValue << std::endl;




    std::promise<int> somePromise2;
    std::future<int> someFuture2 {somePromise2.get_future()};
    
    std::async([&somePromise2] ()
    {
        int n {getNumber2()};
        somePromise2.set_value(n);
    });

    int result {someFuture2.get()};
    std::cout << "Valeur retourne: " << result << std::endl;



    std::promise<int> somePromise3;
    std::future<int> someFuture3 {std::async(getNumber2)};

    result = someFuture3.get();
    std::cout << "Valeur retourne: " << result << std::endl;
    return (0);
}