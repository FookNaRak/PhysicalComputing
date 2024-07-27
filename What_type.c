#include<stdio.h>
#include<ctype.h>

int main()
{
    char something;
    scanf("%c", &something);
    if(isdigit(something)){
        printf("number");
    }
    else if(islower(something)){
        printf("lowercase");
    }
    else if(isupper(something)){
        printf("uppercase");
    }
    else{
        printf("error");
    }
    return 0;
}