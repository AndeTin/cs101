#include<stdio.h>

// void get_binary(int i){
//     int index=0;
//     if(i!=0){
//         if(i%2==1){
//             if(index % 4 == 0){
//                 printf(" ");
//             }
//             printf("1");
//             index++;
//             get_binary(i/2);
//         }
//         else{
//             if(index % 4 == 0){
//                 printf(" ");
//             }
//             printf("0");
//             index++;
//             get_binary(i/2);
//         }
//     }
// }
int index = 0;
void get_binary(int i){
    if(i != 0){
        if(i % 2 == 1){
            printf("1");
            index++;
            if(index % 4 == 0){
                printf(" ");
            }
            get_binary(i/2);
        }
        else{
            printf("0");
            index++;
            if(index % 4 == 0){
                printf(" ");
            }
            get_binary(i/2);
        }
    }
}

int main(){
    int i=129;
    get_binary(i);
}