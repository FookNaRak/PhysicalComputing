#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int lower=0;
    int upper=0;
    int digit=0;
    char *str;

    str = (char*) malloc(101 * sizeof(char));
    scanf("%[^\n]s", str);
    char *ptr = str;
    while(*ptr != '\0'){
        if(islower(*ptr)){
            lower += 1;
        }
        if(isupper(*ptr)){
            upper += 1;
        }
        if(isdigit(*ptr)){
            digit += 1;
        }
        ptr++;
    }
    printf("Lowercase letters: %d\nUppercase letters: %d\nDigits: %d", lower, upper, digit);
    return 0;
}