#include<stdio.h>
int main()
{
    int number, i;
    scanf("%d", &number);
    for(i=number; i>=1; i--){
        printf("%d ", i);
    }
    return 0;
}