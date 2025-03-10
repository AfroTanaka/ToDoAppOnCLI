#include "cppUtils.hpp"
#include "todoUtils.hpp"

extern bool init;

void initChecker()
{
    if (init == false)
        cout << "Run \033[32m./todo -init\033[0m first!" << endl;
}