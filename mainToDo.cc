#include "cppUtils.hpp"
#include "todoUtils.hpp"

int main(int argc, char *argv[])
{
    if (!(argc == 2 || argc == 3))
    {
        errorHandling();
    }
}