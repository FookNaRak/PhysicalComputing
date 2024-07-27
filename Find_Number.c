#include<stdio.h>
int main()
{
    double spicy1, spicy2, spicy3, mid_spicy;
    scanf("%lf %lf %lf", &spicy1, &spicy2, &spicy3);
    if((spicy1>= spicy2 && spicy1<= spicy3) || (spicy1 <= spicy2 && spicy1>=spicy3)){
        mid_spicy = spicy1;
    }
    else if((spicy2>= spicy1 && spicy2<= spicy3) || (spicy2 <= spicy1 && spicy2>=spicy3)){
        mid_spicy = spicy2;
    }
    else{
        mid_spicy = spicy3;
    }
    printf("%.2lf", mid_spicy);
    return 0;
}