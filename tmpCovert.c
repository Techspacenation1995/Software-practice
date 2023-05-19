#include <stdio.h>

int main(void)
{
    int F;
    printf("Celsius     Fahreinheit\n");
    printf("\n");

    for(int c = 0; c <= 100; c += 10)
    {
        F = 32 + ((9*c) / 5);
        printf("%5d             %3d\n", c, F);
    }
    return (0);
}