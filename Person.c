#include<stdio.h>

int main()
{
    char fname1[120], sname1[120], person2[120], person3[120];

    scanf("%s %s %[^\n] %[^\n]", fname1, sname1, person2, person3);
    printf("Person 1: %s %s\nPerson 2: %s\nPerson 3: %s", fname1, sname1, person2, person3);
    return 0;
}