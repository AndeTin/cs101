#include<stdio.h>
int main()
{
    int i=7,a,b;
    for(a=1;a<=i;a++)
    {
        printf(" ");
        printf("%*c",i-a+1,' ');
        for(b=0;b<a;b++)
        {
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}