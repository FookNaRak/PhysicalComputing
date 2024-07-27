#include <stdio.h>

int main()
{
    char inputNumber[6];

    scanf("%s", inputNumber);
    printf("%c%c%c%c%c", inputNumber[2], inputNumber[3], inputNumber[4], inputNumber[0], inputNumber[1]);
    return 0;
}