#include <stdio.h>

int main(void)
{
    int result;

    for(int m = 1; m <= 12; m++)
    {
        result = m * 2;
        printf("%2d x 2 = %2d\n", m, result);
    }
}