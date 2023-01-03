#include<stdio.h>

int index=0;
void get_binary(int i){
    if(i!=0){
        if(i%2==1){
            printf("1");
            index++;
            if(index % 4 == 0){
                printf(" ");
            }
            get_binary(i/2);
        }
        else{
            printf("0");
            index++;
            if(index % 4 == 0){
                printf(" ");
            }
            get_binary(i/2);
        }
    }
}

int main(){
    int i=128;
    get_binary(i);
}