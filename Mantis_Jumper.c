#include<stdio.h>
int countjump(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    return countjump(n-1) + countjump(n-2);
}
int main()
{
    int n, result;
    scanf("%d", &n);

    result = countjump(n);
    printf("method = %d", result);
    return 0;
}