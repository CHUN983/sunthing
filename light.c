//有問題
#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n, &k);
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i]=1;
    }
    for(int i=2; i<=k; i++){
        int temp=i;
        while(n>=temp){
            if(arr[temp-1]==1){
                arr[temp-1]=0;
            }else{
                arr[temp-1]=1;
            }
            temp+=i;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]==1){
            printf("%d ",i+1);
        }
    }
}