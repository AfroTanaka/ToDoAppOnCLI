#include "todoUtils.hpp"
#include "cppUtils.hpp"

void handle_existing_setup()
{
    cout << "The schedule initialization has already been completed." << endl;
    cout << "If you want to reorganize your schedule, please run the following command." << endl;
    cout << "\n\033[32m./todo -reset\033[0m\n" << endl;
    cout << "However, keep in mind that running this command will reset all your scheduled settings." << endl;
}