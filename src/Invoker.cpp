#include "../include/Invoker.hpp"

void Invoker::setOnStart(Command* command)
{
    this->on_start = command;
}

void Invoker::setOnFinish(Command* command)
{
    this->on_finish = command;
}

Invoker::~Invoker()
{
    delete on_start;
    delete on_finish;
}

void Invoker::doSomethingImportant()
{
    std::cout << "Invoker: Does anybody want something done before I begin?\n";
    if (this->on_start)
    {
        this->on_start->execute();
    }
    std::cout << "Invoker: ...doing something really important...\n";
    std::cout << "Invoker: Does anybody want something done after I finish?\n";
    if (this->on_start)
    {
        this->on_finish->execute();
    }
}
