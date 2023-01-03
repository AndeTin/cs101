#include<stdio.h>
int binary=0;
void binary_count(int i) {
    if(i!=0) {
        if(i%2==1) {
            binary++;
        }
        binary_count(i/2);
    }
}

int main(){
    int i=15;
    binary_count(i);
    printf("%d",binary);
}
