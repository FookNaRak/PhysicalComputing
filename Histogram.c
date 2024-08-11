#include<stdio.h>
#include<ctype.h>
int main()
{
    int count, alp[26] = {0}, order_count = 0;
    char ch, order[26];
    scanf("%d", &count);
    for(int i=0;i<count;i++){
        scanf(" %c", &ch);
        ch = tolower(ch);
        if(ch >= 'a' && ch <= 'z'){
            if(alp[ch - 'a'] == 0){
                order[order_count++] = ch;
            }
            alp[ch - 'a']++;
        }
    }
    for(int i=0; i<order_count;i++){
            printf("%c: %d\n", order[i], alp[order[i] - 'a']);
    }
    return 0;
}