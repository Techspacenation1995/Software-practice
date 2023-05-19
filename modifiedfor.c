#include <stdio.h>

int main(void)
{
    int n;

    printf("How many lines to print? ");
    scanf("%d", &n);
    printf ("\n");
    for(int i = 1; i <= n; i++)
    {
        printf("%d. I must not sleep in class\n", i);
    }
}