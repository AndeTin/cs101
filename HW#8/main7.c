#include<stdio.h>
int main(){
    int a=-999,i=0;
    if(a>=0){
        while(a!=0){
        i+=a%10;
        a/=10;
        }
    }else{
        a=a*(-1);
        while(a>10){
            i+=a%10;
            a/=10;
        }
        a=a*(-1);
        i+=a;
    }
    printf("%d",i);
}