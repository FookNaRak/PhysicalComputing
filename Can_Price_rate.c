#include<stdio.h>

int main()
{
    double price, diameter, height;

    scanf("%lf%lf%lf", &price, &diameter, &height);
    double volume = 3.14159265359 * height * ((diameter/2)*(diameter/2));
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", price/volume);
    return 0;
}