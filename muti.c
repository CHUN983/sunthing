#include<stdio.h>

int main(){
    printf(" |");
    for(int i=2; i<10; i++) printf(" %2d",i);
    printf("\n");
    for(int i=2; i<20 ;i++) printf("-");
    printf("\n");
    
    for(int i=2; i<10; i++){
        printf("%d |",i);
        for(int j=2; j<10; j++){
            printf(" %2d",i*j);
        }
        printf("\n");
    }
}