#include<stdio.h>
int main()
{
    char someone;
    scanf("%c", &someone);
    if(64 < (int)someone && (int)someone < 91){
        someone = (char)((int)someone + 32);
        printf("%c", someone);
    }
    else if(96 < (int)someone && (int)someone < 123){
        someone = (char)((int)someone -32);
        printf("%c", someone);
    }
    else{
        printf("error");
    }
    return 0;
}