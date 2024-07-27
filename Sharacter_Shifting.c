#include<stdio.h>

int main()
{
    char ch1, ch2, ch3, ch4, ch5;

    scanf(" %c %c %c %c %c", &ch1, &ch2, &ch3, &ch4, &ch5);

    if(ch1 == 'z') {
        ch1 = 'a';
    }else if (ch1 == 'Z') {
        ch1 = 'A';
    }else {
        ch1 = (char)(ch1 + 1);
    }
    
    if(ch3 == 'z') {
        ch3 = 'a';
    }else if (ch3 == 'Z') {
        ch3 = 'A';
    }else {
        ch3 = (char)(ch3 + 1);
    }

    if(ch5 == 'z') {
        ch5 = 'a';
    }else if (ch5 == 'Z') {
        ch5 = 'A';
    }else {
        ch5 = (char)(ch5 + 1);
    }

    printf("%c\n%c\n%c\n%c\n%c", ch1, ch2, ch3, ch4, ch5);
    return 0;
}