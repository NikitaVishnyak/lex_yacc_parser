#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 4;
    int result;
    int z = 4456;
    result = num1 * 2 + 7;
    if (num1 < result)
    {
        num1 = result * 2 + 200;
    }
    else
    {
        if (num1 < result)
        {
            printf("test!");
            result = num1 - 2;
        }
    }

    if (num1 > 11512928)
    {
        for (int i = 0; i < 20; i++)
        {
            z = num1 + 6;
        }
    }
    return 0;
}
