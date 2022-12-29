#include<stdio.h>

void print_spaces(int r,int rows){
    int i;
    for(i=0;i<rows-r;i++){
        printf(" ");
    }
}
void print_stars(int r){
    int i;
    for(i=0;i<2*r-1;i++){
        printf("*");
    }
}
int main(){
    int rows=5;
    int i,r;
    for(r=1;r<=rows;r++){
        print_spaces(r,rows);
        print_stars(r);
        printf("\n");
    
    
    }
}