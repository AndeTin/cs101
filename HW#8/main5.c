#include<stdio.h>

void print_top(){
    printf("X'max tree!\n");
}

void print_spaces(int rows){
    for(int i=0;i<rows;i++){
        printf(" ");
    }
}

void print_stars(int r){
    for(int i=0;i<2*r-1;i++){
        printf("*");
    }
    printf("\n");
}

void print_trunk(int rows){
    printf("      *\n");
}

int main(){
    int rows=7;
    print_top();
    for(int index=0,r=1;index<3;index++){
        print_spaces(rows-r);
        print_stars(r);
        r++;
    }
    for(int index=0,r=1;index<5;index++){
        print_spaces(rows-r);
        print_stars(r);
        r++;
    }
    for(int index=0,r=1;index<7;index++){
        print_spaces(rows-r);
        print_stars(r);
        r++;
    }
    for(int index=0;index<5;index++){
        print_trunk(rows);
    }

}