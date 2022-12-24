#include "Iter.h"

int32_t main(void)
{
    {
        std::string Test1[] = {"Hallo", "Wereld", "Cool"};

        iter(Test1, sizeof(Test1)/sizeof(Test1[0]), PrintArray);
    }
    {
        int Test2[] = {1, 2, 3, 4, 5};

        iter(Test2, sizeof(Test2)/sizeof(Test2[0]), PrintArray);
    }
    {
        char *Test3[] = { (char*)"Awesome", (char*)"Swag"};

        iter(Test3, sizeof(Test3)/sizeof(Test3[0]), PrintArray);
        iter(Test3, 1, PrintArray);
    }
    return (0);
}
