#include<stdio.h>
int main()
{
    int i=10;
    if((i != 1)&&(i & i-1))
    {
        printf("%d is false",i);
    }
    else
    {
        printf("%d  is true",i);
    }
    return 0;
}