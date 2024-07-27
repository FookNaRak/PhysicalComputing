#include<stdio.h>
int main()
{
    double length, width;

    scanf("%lf%lf", &width, &length);
    double result = (length*2)+(width*2);
    printf("Perimeter of rectangle = %.4lf units", result);
    return 0;
}