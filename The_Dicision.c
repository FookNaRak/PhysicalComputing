#include<stdio.h>
int main()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    if(number1 > number2){
        for(int i =number1; i>=number2; i--){
            printf("%d ", i);
        }
    }
    else if(number1 < number2){
        for(int i =number1; i<=number2; i++){
            printf("%d ", i);
        }
    }
    return 0;
}