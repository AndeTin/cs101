#include<stdio.h>
int main()
{
    double Pi=4.0f;
    int flag=1;
    long ipi=0;
    int x=0;
    for(int i=3;;i+=2){
        if(flag==1){
            Pi-=(4.0/i);
            flag--;
        }
        else{
            Pi+=(4.0/i);
            flag++;
        }
        ipi=Pi*100000;
        if(ipi==314159){
            x=i;
            break;
        }
    }
    printf("%d %f",x,Pi);
}