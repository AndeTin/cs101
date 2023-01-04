#include<stdio.h>

int get_digit(int n){
    if(n==0){
        return;
    }
        printf("%d",n%10);
        get_digit(n/10);
}

int main(){
    int n = 1234;
    int sum = 0;
    printf("sum = ");
    get_digit(n);
    return 0;
}