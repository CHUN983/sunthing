#include<stdio.h>

int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		int sum=1;
		int num[n][n];
		for(int i=n-1; i>=0; i--){
			for(int j=n-i-1; j<i; j++){
				num[j][i]=sum++;
			}//右邊
			for(int j=i; j>n-i-1; j--){
				num[i][j]=sum++;
			}//下面
			for(int j=i; j>n-i-1; j--){
				num[j][n-i-1]=sum++;
			}//左邊
			for(int j=n-i-1; j<i; j++){
				num[n-i-1][j]=sum++;
			}//上面
		}
		num[n/2][n/2]=sum;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++)
				printf("%3d",num[i][j]);
			printf("\n");
		}
	}
}