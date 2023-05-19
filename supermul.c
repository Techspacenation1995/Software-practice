#include <stdio.h>

int main(void)
{
    int factor, start, finish, result;
    printf("Tye of table: ");
    scanf("%d", &factor);
    printf("From? ");
    scanf("%d", &start);
    printf("To? ");
    scanf("%d", &finish);
    printf("\n");

    for(int i = start; i <= finish; i++) // Program assumes that the start is less than or is equal to finish
    {
        result = factor * i;
        printf("%2d x %2d = %2d\n", factor, i, result);
    }


}