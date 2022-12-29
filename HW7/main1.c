#include<stdio.h>
int main()
{
    int i=7,a,b;
    for(a=1;a<=i;a++)
    {
        printf(" ");
        for(b=1;b<=i-a;b++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}