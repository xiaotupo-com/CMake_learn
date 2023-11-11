#pragma once

#include <iosfwd>
#include <string>

class Message {
public:
    Message(const std::string& m);
    void printMsg(void);
    void setMsg(const std::string& m);

private:
    std::string message_;
};
