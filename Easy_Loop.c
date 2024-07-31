#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if(number > 0){
        for(int i=number; i>=0;i--){
            printf("%d ", i);
        }
    }
    else if(number == 0){
        printf("%c",'0');
    }
    else{
        for(int i=number; i<=0; i++){
            printf("%d ", i);
        }
    }
    return 0;
}