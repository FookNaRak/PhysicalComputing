#include<stdio.h>
int main()
{
    int number, found=0;
    int mmm[8] = {2, 20, 8, 10, 4, 6, 16, 18};
    int nnn[7] = {1, 3, 9, 7, 11, 15, 19};
    while(!(number>=1 && number <=20)){
        scanf("%d", &number);
    }
    if(number>=1 && number <=20){
        for(int i=0;i<8;i++){
            if(number == mmm[i]){
                printf("%d is in M at index [%d]", number, i);
                found = 1;
                break;
            }
        }
        for(int i=0;i<7;i++){
            if(number == nnn[i]){
                printf("%d is in N at index [%d]", number, i);
                found = 1;
                break;
            }
        }
    }
    if(!found){
        printf("%d is not in neither M nor N", number);
    }
    return 0;
}