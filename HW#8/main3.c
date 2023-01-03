#include<stdio.h>

int index=0;
void get_binary(int i){
    if(i!=0){
        get_binary(i/2);
        printf("%d",i%2);
        index++;
        if(index%4==0){
            printf(" ");
        }
    }
    else{
        if(index %4 != 0){
            printf("0");
        }
    }
}
int main(){
    int i=6;
    get_binary(i);
    return 0;
}