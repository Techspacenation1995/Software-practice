#include <stdio.h>

int max(int a, int b);

int main(void)
{
    int n1, n2;
    printf("Enter two whole nubers: ");
    scanf("%d %d", &n1, &n2);
    max(n1,n2);

    printf("The bigger is %d", max(n1, n2));
}

int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
        return b;
}