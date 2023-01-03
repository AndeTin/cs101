#include<stdio.h>

int index=0;
void get_binary(int i){
    if(i!=0){
        get_binary(i/2);
        printf("%d",i%2);
        if(index%4==0){
            printf(" ");
        }
        index++;
    }
    else{
        if(index%4!=0){
            printf("0");
        }
    }
}
int main(){
    int i=25;
    get_binary(i);
    return 0;
}