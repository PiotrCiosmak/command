#pragma once

#include <iostream>
#include "Command.hpp"

class Invoker
{
public:
    ~Invoker();
    void setOnStart(Command* command);
    void setOnFinish(Command* command);
    void doSomethingImportant();

private:
    Command* on_start;
    Command* on_finish;
};
