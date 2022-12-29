#include<stdio.h>
int main()
{
    int i=0,a=1,b=1;
    for(i=0;i<81;i++)
    {
        a=i/9+1;
        b=i%9+1;
        printf("%d*%d=%d\t ",a,b,a*b);
        if(b==9)
            printf("\n");
    }
    return 0;
}