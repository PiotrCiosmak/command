#pragma once

#include "Receiver.hpp"
#include "Command.hpp"

class ComplexCommand : public Command
{
public:
    ComplexCommand(Receiver* new_receiver, std::string new_a, std::string new_b);
    void execute() const override;

private:
    Receiver* receiver;
    std::string a;
    std::string b;
};
