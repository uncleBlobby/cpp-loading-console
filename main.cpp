#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

void dotLoader(int);
void percentLoader(int);
void equalsLoader(int);

int main () 
{
    dotLoader(1);
    percentLoader(1);
    equalsLoader(1);
    return 0;
}

void dotLoader(int seconds)
{
    for(int i = 0; i < seconds; i++)
    {   
        for(int j = 0; j < 10; j++)
        {
        std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
    std::cout << "Task Completed!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    return;
}

void equalsLoader(int seconds)
{
    std::cout << "[" << std::flush;
    for(int i = 0; i < seconds; i++)
    {   
        for(int j = 0; j < 50; j++)
        {
        std::cout << "=" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }
    std::cout << "]" /* << std::endl << std::flush */ ;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "Task Completed!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    return;
}

void percentLoader(int seconds)
{
    for(int i = 0; i < seconds; i++)
    {   
        for(int j = 0; j < 10; j++)
        {
        std::cout << "\r" << j * 10 << "% " << std::flush;
        //std::cout << "." << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        std::cout << "\r" << 10 * 10 << "% " << std::flush;
    }
    std::cout << "Task Completed!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    return;
}