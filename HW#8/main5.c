#include<stdio.h>
int rows=7;
void print_top(){
    printf("X'max tree!\n");
}

void print_spaces(int rows){
    int j=0;
    for(int i=0; i<rows; i++,j++){
        printf(" ");
        if(j==3){
            return;
        }
    }
}

void print_stars(int r){
    for(int i=0; i< r; i++){
        printf("*");
    }
    printf("\n");
}

void print_trunk(int rows){
    for(int i=0; i<rows; i++){
        printf("      *\n");
    }
}

int main(){
    int r;
    print_top();
    print_spaces(rows-1);
    print_stars(1);
}