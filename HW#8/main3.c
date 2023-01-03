#include<stdio.h>

int index=0;
void get_binary(int n){
    if(n == 0 && index %4 == 0){
        return;
    }
    index++;
    get_binary(n/2);
    printf("%d",n%2);
    index--;
    if(index%4==0){
        printf(" ");
    }
}

int main(){
    int n=127;
    get_binary(n);
}