#include<stdio.h>
int main()
{
    double Pi=4.0;
    int flag=1;
    for(int i=3;i<=100000;i+=2)
    {
        if(flag==1)
        {
            Pi=Pi-(4.0/i);
            flag=0;
        }
        else
        {
            Pi=Pi+(4.0/i);
            flag=1;
        }
    }
    printf("Pi=%f",Pi);
    
}