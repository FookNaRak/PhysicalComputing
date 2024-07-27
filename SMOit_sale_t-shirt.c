#include<stdio.h>
int main()
{
    double current_price, price_discount, count;

    scanf("%lf%lf%lf", &current_price, &price_discount, &count);

    double result = current_price * count * (1-price_discount/100);
    printf("%.2lf", result);
    return 0;
}