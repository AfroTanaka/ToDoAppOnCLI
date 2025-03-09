#include "cppUtils.hpp"
#include "todoUtils.hpp"

int main(int argc, char *argv[])
{
    if (!(argc == 2 || argc == 3))
    {
        errorHandling();
        return (1);
    }
    if (argc == 2)
    {
        if (strcmp(argv[1], "-all") == 0)
        {
            // call func
        }
        else if (strcmp(argv[1], "-main") == 0)
        {
            // call func
        }
        else if (strcmp(argv[1], "-sub") == 0)
        {
            // call func
        }
        else if (strcmp(argv[1], "-goal") == 0)
        {
            // call func
        }
        else if (strcmp(argv[1], "-help") == 0)
        {
            // call func
        }
        else if (strcmp(argv[1], "-progress") == 0)
        {
            // call func
        }
        else
        {
            errorHandling();
            return (1);
        }
    }
    else if (argc == 3)
    {
        if (strcmp(argv[1], "-done") == 0)
        {
            if (strcmp(argv[2], "-main") == 0)
            {
                // call func
            }
            else if (strcmp(argv[2], "-sub") == 0)
            {
                // call func
            }
            else
            {
                errorHandling();
                return (1);
            }
        }
        else if (strcmp(argv[1], "-add") == 0)
        {
            if (strcmp(argv[2], "-main") == 0)
            {
                // call func
            }
            else if (strcmp(argv[2], "-sub") == 0)
            {
                // call func
            }
            else
            {
                errorHandling();
                return (1);
            }
        }
        else if (strcmp(argv[1], "-rm") == 0)
        {
            if (strcmp(argv[2], "-main") == 0)
            {
                // call func
            }
            else if (strcmp(argv[2], "-sub") == 0)
            {
                // call func
            }
            else
            {
                errorHandling();
                return (1);
            }
        }
        else
        {
            errorHandling();
            return (1);
        }
    }
    else
    {
        errorHandling();
        return (1);
    }
}