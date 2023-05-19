#include <stdio.h>

int printdays(int n);

int main(void)
{
    int day;
    printf("Enter a day from 1 to 7: ");
    scanf("%d", &day);
    printdays(day);
}

int printdays(int n)
{
    if(n == 1)
        printf("Sunday\n");
    else if(n == 2)
        printf("Monday\n");
    else if(n == 3)
        printf("Tuesday\n");
    else if(n == 4)
        printf("Wednesday\n");
    else if(n == 5)
        printf("Thursday\n");
    else if(n == 6)
        printf("Friday\n");
    else if(n == 7)
        printf("Saturday\n");
    else
        printf("Invalid Day");
}