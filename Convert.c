#include<stdio.h>
#include<string.h>
#include<ctype.h>

void comparestring(char sentence1[], char sentence2[], int lensentence1, int lensentence2){
    if(lensentence1 != lensentence2){
        printf("Both strings are not the same.");
    }
    else if(strcasecmp(sentence1, sentence2) == 0){
        printf("Both strings are the same.\n");
    }
    else{
        printf("Both strings are not the same.");
    }
}
void swapcase(char str[], int lenght)
{
    for(int i=0; i<lenght;i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
    printf("%s\n", str);
}

int main()
{
    char sentence1[101], sentence2[101];
    int lensentence1, lensentence2;
    
    scanf("%[^\n]", sentence1);
    getchar();
    scanf("%[^\n]", sentence2);
    //find lenght sentence
    lensentence1 = strlen(sentence1);
    lensentence2 = strlen(sentence2);

    printf("*** Results ***\n");
    swapcase(sentence1, lensentence1);
    swapcase(sentence2, lensentence2);
    printf("***************\n");
    comparestring(sentence1, sentence2, lensentence1, lensentence2);
    return 0;
}