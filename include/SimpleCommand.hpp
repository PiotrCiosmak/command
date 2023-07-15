#pragma once

#include "Command.hpp"
#include <iostream>

class SimpleCommand : public Command
{
public:
    explicit SimpleCommand(std::string new_pay_load);
    void execute() const override;

private:
    std::string pay_load;
};
