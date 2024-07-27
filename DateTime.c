#include<stdio.h>
int main()
{
    long second, minute, hours, day, sec;
    scanf("%ld", &second);


    day = second /86400;
    hours = (second % 86400) / 3600;
    minute = (second % 3600) / 60;
    sec = second % 60;
    printf("%ld s = %ld d %ld h %ld m %ld s", second, day, hours, minute, sec);
    return 0;
}