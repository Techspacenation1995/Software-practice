#include <stdio.h>

int main(void)
{
    char ch;
    int numChar = 0;

    printf("Type some data and press 'Enter' \n");
    while((ch = getchar()) != '\n')
    numChar++;

    printf("The number of characters is %d\n", numChar);
}