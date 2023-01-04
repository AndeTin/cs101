#include<stdio.h>
void print_top(){
    printf("X'max tree!\n");
}

void print_spaces(int rows){
    for(int i=0; i<rows; i++){
        printf(" ");
    }
}


void print_stars(int r){
    for(int i=0; i< 2*r-1; i++){
        printf("*");
    }
    printf("\n");
}

void print_trunk(int rows){
    for(int i=0; i<rows; i++){
        printf("       *\n");
    }
}

int main(){
    int r=0,rows=8,index=0;
    for(int i=0; i< rows; i++){
        if(index==4){
            continue;
        }
        print_spaces(rows-r);
        print_stars(r);
        r++;
        index++;
    }
    
    for(int i=0,r=0,index=0; i< rows; i++){
        if(index==6){
            continue;
        }
        print_spaces(rows-r);
        print_stars(r);
        r++;
        index++;
    }
    for(int i=0,r=0; i< rows; i++){
        print_spaces(rows-r);
        print_stars(r);
        r++;
    }
    print_trunk(rows);

}