#include<stdio.h>

int main()
{
    char input1[31], input2[31], input3[31], input4[31];

    scanf("%s%s%s%s", input1, input2, input3, input4);

    printf("String 1: %c%c%c\n", input1[0], input1[1], input1[2]);
    printf("String 2: %c%c%c%c\n", input2[0], input2[1], input2[2], input2[3]);
    printf("String 3: %c%c%c%c%c\n", input3[0], input3[1], input3[2], input3[3], input3[4]);
    printf("String 4: %c%c%c%c%c%c\n", input4[0], input4[1], input4[2], input4[3], input4[4], input4[5]);
    return 0;
}