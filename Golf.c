#include<stdio.h>
#include<math.h>
double calsin(int degree)
{
    return sin((degree * M_PI)/180);
}
int main()
{
    double radius, h, g=9.81;
    int degree, speed;
    scanf("%d", &degree);
    scanf("%d", &speed);

    h = (pow(speed, 2)*pow(calsin(degree), 2))/(2*g);

    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %d\n", speed);
    printf("h (m) : %.4lf", h);
    return 0;
}