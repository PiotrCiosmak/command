#include "../include/Receiver.hpp"

void Receiver::doSomething(const std::string& a)
{
    std::cout << "Receiver: Working on (" << a << ".)\n";
}

void Receiver::doSomethingElse(const std::string& b)
{
    std::cout << "Receiver: Also working on (" << b << ".)\n";
}
