#include "../include/ComplexCommand.hpp"

ComplexCommand::ComplexCommand(Receiver* new_receiver, std::string new_a, std::string new_b)
        : receiver{new_receiver}, a{new_a}, b{new_b}
{}

void ComplexCommand::execute() const
{
    std::cout << "ComplexCommand: Complex stuff should be done by a receiver object.\n";
    this->receiver->doSomething(this->a);
    this->receiver->doSomethingElse(this->b);
}
