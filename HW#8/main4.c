#include<stdio.h>

void round_func(float f){
    int i = (int)(f+0.5);
    printf("%d",i);
}

int main(){
    float f = 1.4;
    round_func(f);
}