#include "cppUtils.hpp"
#include "todoUtils.hpp"

bool init = false;

void initTodoSchedule()
{
    if (init == true)
    {
        handle_existing_setup();
    }
    else
    {
        init = true;
        int dayOfTheWeek;
        printf("1: Monday\n2: Tuesday\n3: Wednesday\n4: Thursday\n5: Friday\n6: Saturday\n7: Sunday\n");
        printf("Select the number: ");
        cin >> dayOfTheWeek;
        if (!(1 <= dayOfTheWeek && dayOfTheWeek <= 7))
            errorHandling();
        else
        {
            getDayOfWeek(dayOfTheWeek);
        }
    }
}