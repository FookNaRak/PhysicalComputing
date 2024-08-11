#include<stdio.h>
#include<ctype.h>
int main()
{
    char word[201];
    char upper[26] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    char lower[26] = "abxypqrmncedkljoshtufvzgwi";
    char result[201];
    int i, j, c=0;
    scanf("%[^\n]", word);
    for(i=0;word[i] != '\0';i++){
        for(j=0;j<26;j++){
            if(word[i] == upper[j]){
                if(j>=21){
                    result[i] = upper[j-21];
                }
                else{
                    result[i] = upper[j+5];
                }
            }
            else if(word[i] == ' '){
                result[i] = ' ';
            }
        }
        for(j=0;j<26;j++){
            if(word[i] == lower[j]){
                if(j>=21){
                    result[i] = lower[j-21];
                }
                else{
                    result[i] = lower[j+5];
                }
            }
            else if(word[i] == ' '){
                result[i] = ' ';
            }
        }
    }
    result[i] = '\0';
    printf("%s", result);
    return 0;
}