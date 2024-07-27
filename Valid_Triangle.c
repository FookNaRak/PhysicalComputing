#include<stdio.h>

int main()
{
    double danA, danB, danC;
    scanf("%lf %lf %lf", &danA, &danB, &danC);

    if ((danA+danB > danC) && (danA+danC > danB) && (danB+danC > danA)){
        printf("Triangle is valid.");
    }
    else{
        printf("Triangle is not valid.");
    }
    return 0;
}