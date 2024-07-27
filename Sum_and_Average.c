#include<stdio.h>

int main()
{
    float num1, num2, num3, num4;

    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    float summation = num1 + num2 + num3 + num4;
    float average = (num1 + num2 + num3 + num4)/4;

    printf("Summation is %.2f\nAverage is %.3f", summation, average);
    return 0;
}