#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>

void doTask1(std::string name, unsigned int delay)
{
    for(int i = 0; i < 5 ; i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        std::cout << name << ":" << i << std::endl; 
    }
}

void doTask2(std::mutex& m, std::string name, unsigned int delay)
{
    m.lock();

    for(int i = 0; i < 5 ; i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        std::cout << name << ":" << i << std::endl; 
    }
    m.unlock();
}

int main()
{
    std::cout << "Instruction du thread principal" << std::endl;
    std::mutex mu;

    std::thread th1{doTask1, "TH1", 1};
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::thread th2{doTask1, "TH2", 2};

    th1.join();
    th2.join();

    std::cout << "Une autre instruction du thread principal" << std::endl;

    std::thread th3{doTask2, std::ref(mu), "TH1", 1};
    std::thread th4{doTask2, std::ref(mu), "TH2", 1};

    th3.join();
    th4.join();
    
    std::cout << "Retour a l'instruction du thread principal" << std::endl;

    return (1);
}