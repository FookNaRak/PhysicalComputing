#include<stdio.h>

int main()
{
    char word[4];

    scanf("%s", word);

    printf("*****\n");
    printf("*-*-*\n");
    printf("*%s*\n", word);
    printf("*-*-*\n");
    printf("*****\n");
    return 0;
}