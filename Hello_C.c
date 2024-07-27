#include <stdio.h>
#include <string.h>

int main(){
    char fullName[80];
    int studenID;

    scanf("%d", &studenID);
    getchar();

    scanf("%[^\n]", fullName);
    printf("Hello! My name is %s, %d", fullName, studenID);
    return 0;
}