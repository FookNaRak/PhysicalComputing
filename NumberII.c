#include<stdio.h>

int main()
{
    char inputNumber[6];

    scanf("%s", inputNumber);
    printf("%c%80s", inputNumber[0], " ");
    printf("%c%c%79s", inputNumber[0], inputNumber[1], " ");
    printf("%c%c%c%78s", inputNumber[0], inputNumber[1], inputNumber[2], " ");
    printf("%c%c%c%c%77s", inputNumber[0], inputNumber[1], inputNumber[2], inputNumber[3], " ");
    printf("%c%c%c%c%c", inputNumber[0], inputNumber[1], inputNumber[2], inputNumber[3], inputNumber[4]);
    return 0;
}