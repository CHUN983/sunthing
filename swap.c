#include<stdio.h>

int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int index_a,index_b;
    while(scanf("%d %d",&index_a,&index_b)!=EOF){
        int temp=arr[index_a-1];
        arr[index_a-1]=arr[index_b-1];
        arr[index_b-1]=temp;
    }

    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
}