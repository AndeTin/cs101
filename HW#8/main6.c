#include<stdio.h>

void print_spaces(int r)
{
    int i;
    for(i=0;i<r;i++)
    {
        printf(" ");
    }
}
void print_stars(int r)
{
    int i;
    for(i=0;i<2*r-1;i++)
    {
        printf("*");
    }
}
void print_top(int r){
    printf(" ");
    for(int i = 1; i < 2*r-2 ; i++){
            printf("*");
    }
    printf("\n");
}

void print_wall(int j){
    for(int i=0;i<j;i++){
        printf(" *     *\n");
    }
}

int main(){
    int r,rows=5;
    for(r=1;r<rows;r++){
        print_spaces(rows-r);
        print_stars(r);
        printf("\n");
    }
    print_top(r);
    print_wall(4);
    print_top(r);
}