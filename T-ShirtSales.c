#include<stdio.h>
int main()
{
    double current_price, discount_percent;
    int quantity;
    scanf("%lf %lf %d", &current_price, &discount_percent, &quantity);

    int cal_promotion1 = quantity - (quantity/3);
    double promotion1 = current_price * cal_promotion1;
    double promotion2 = current_price * (1-discount_percent/100) *quantity;

    if(promotion1 < promotion2){
        printf("Buy 2 Get 1\n");
        printf("%.2lf", promotion1);
    }
    else{
        printf("Discount %.0lf%%\n", discount_percent);
        printf("%.2lf", promotion2);
    }
    return 0;
}