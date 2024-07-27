#include<stdio.h>
#include<math.h>

int main()
{
    double darn1, darn2;
    scanf("%lf %lf", &darn1, &darn2);

    double result = sqrt(pow(darn1, 2)+ pow(darn2, 2));
    printf("%.2lf", result);
    return 0;
}