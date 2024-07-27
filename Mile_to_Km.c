#include<stdio.h>

int main()
{
    float mile;

    scanf("%f", &mile);
    float km = mile*1.60934;
    printf("%.2f", km);
    return 0;
}