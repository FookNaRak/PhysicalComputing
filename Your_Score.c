#include<stdio.h>
int main()
{
    float grade;
    scanf("%f", &grade);
    if(100 >= grade && grade >= 80){
        printf("A");
    }
    else if(80 > grade && grade >= 70){
        printf("B");
    }
    else if(70 > grade && grade >= 60){
        printf("C");
    }
    else if(60 > grade && grade >= 50){
        printf("D");
    }
    else if(50 > grade && grade >= 0){
        printf("F");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}