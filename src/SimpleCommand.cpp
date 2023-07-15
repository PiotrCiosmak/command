#include "../include/SimpleCommand.hpp"

SimpleCommand::SimpleCommand(std::string new_pay_load) : pay_load{new_pay_load}
{}

void SimpleCommand::execute() const
{
    std::cout << "SimpleCommand: See, I can do simple things like printing (" << this->pay_load
              << ")\n";
}
