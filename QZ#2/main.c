#include<stdio.h>

void print_spaces(int r){
    for(int i=0;i<r;i++){
        printf(" ");
    }
}
void print_stars(int i){
    int r;
    for(r=0;r<2*i-1;r++){
        printf("*");
    }
}
int main(){
    int rows=5;
    int i = rows;
    int r;
    for(r=1;r<=rows;r++){
        print_spaces(r);
        print_stars(i);
        printf("\n");
        i--;
    
    
    }
}