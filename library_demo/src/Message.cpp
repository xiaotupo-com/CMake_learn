#include "Message.h"

#include <iostream>

Message::Message(const std::string& m)
{
    message_ = m;
}

void Message::printMsg(void)
{
    std::cout << message_ << std::endl;
}

void Message::setMsg(const std::string& m)
{
    message_ = m;
}
