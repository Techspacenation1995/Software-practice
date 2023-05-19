#include <stdio.h>

int main(void)
{
    char ch;
    int numBlank = 0;

    printf("Type some data and press 'Enter' \n");
    while((ch = getchar()) == ' ')
    numBlank++;

    printf("The number of leading blank is %d\n", numBlank);
    printf("The first non-blank is %c\n", ch);
}