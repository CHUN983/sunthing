#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum=0,temp=n;
    while(n!=0){
        sum*=10;
        sum+=n%10;
        n/=10;
    }
    printf("%d",sum+temp);
}