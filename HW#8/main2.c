#include<stdio.h>
int binary=0;
void bina(int i) {
    if(i!=0) {
        if(i%2==1) {
            binary++;
        }
        bina(i/2);
    }
}

int main(){
    int i=129;
    bina(i);
    printf("%d",binary);
}
