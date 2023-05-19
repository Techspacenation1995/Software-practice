#include <stdio.h>

int main(void)
{
    int n, result;

    printf("Enter type of table: ");
    scanf("%d", &n);

    for(int i = 1; i <= 12; i++)
    {
        result = n * i;
        printf("%2d x %2d = %2d\n", n, i, result);
    }
}