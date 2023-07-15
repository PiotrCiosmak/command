#include "include/Invoker.hpp"
#include "include/SimpleCommand.hpp"
#include "include/Receiver.hpp"
#include "include/ComplexCommand.hpp"

int main()
{
    Invoker* invoker = new Invoker;
    invoker->setOnStart(new SimpleCommand("Say Hi!"));
    Receiver* receiver = new Receiver;
    invoker->setOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
    invoker->doSomethingImportant();

    delete invoker;
    delete receiver;
}
