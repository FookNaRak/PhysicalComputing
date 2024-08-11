#include<stdio.h>
#include<ctype.h>
int main()
{
    char sentence[101];
    int left=0, right, Palindrome=1;
    scanf("%[^\n]", sentence);
    while(sentence[left] != '\0' && sentence[left] != '\n'){
        left++;
    }
    right = left-1;
    left = 0;
    while(left<right){
        if(tolower(sentence[left]) != tolower(sentence[right])){
            Palindrome=0;
            break;
        }
        left++;
        right--;
    }
    if(Palindrome){
        printf("It is Palindrome.");
    }
    else{
        printf("It is not Palindrome.");
    }
    return 0;
}