#include<stdio.h>
int main()
{
    int number, awnser=0;
    do{
        scanf("%d", &number);
        if(number != -9){
            awnser += number;
        }
    }
    while(number != -9);
    printf("%d", awnser);
    return 0;
}