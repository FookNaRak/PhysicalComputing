#include<stdio.h>
int main()
{
    char word[101];
    int len = 0;
    scanf("%[^\n]", word);
    while(word[len] != '\0' && word[len] != '\n'){
        len++;
    }
    for(int i = len-1; i>=0; i--){
        printf("%c", word[i]);
    }
    return 0;
}