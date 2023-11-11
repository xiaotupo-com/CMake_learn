#include "Message.h"
#include <iostream>

int main(void)
{
    std::cout << "Hello,World!" << std::endl;

    Message msg = {"Hello,Message!"};
    msg.printMsg();
    msg.setMsg("你好，世界！");
    msg.printMsg();
}