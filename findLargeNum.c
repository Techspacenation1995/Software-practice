#include <stdio.h>

int main(void)
{
    int num, bigNum = 0;

    printf("Enter a number (0 to end): ");
    scanf("%d", &num);

    while(num != 0)
    {
        if(num > bigNum)
        {
            bigNum = num;
        }
    printf("Enter a number (0 to end): ");
    scanf("%d", &num);
    }
    printf("The largest is %d", bigNum);
}