#include <iostream>
using namespace std;
#include "utility/logger.h"
using namespace mylog::utility;

int main(int argc, char *argv[]) {
    std::cout << "log" << std::endl;
    Logger::instance()->open("./test.log");
    Logger::instance()->log(Logger::DEBUG, __FILE__, __LINE__, "hello world");
    Logger::instance()->log(Logger::DEBUG, __FILE__, __LINE__, "name is %s, age is %d", "jack", 18);
    return 0;
}
