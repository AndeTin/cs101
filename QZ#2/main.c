#include<stdio.h>

void print_spaces(int r,int rows){
    int i;
    for(i=0;i<rows-r;i++){
        printf("%*c",i," ");
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
    int i;
    for(i=1;i<=rows;i++,rows--)
    {
        print_spaces(i,rows);
        print_stars(rows*5-1);
        printf("\n");
    }
    return 0;
}