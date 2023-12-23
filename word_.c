#include<stdio.h>
#include<string.h>

int main(){
    char word[151];
    //&取址符號


    scanf("%s",word);
    int length=0;
    for(length; word[length]!='\0'; length++);//int length=strlen(word);-->需要#include<string>

    int n;
    char temp[151];
    while(scanf("%d %s",&n, temp)!=EOF){
        if(n==1){
            for(int i=0; temp[i]!='\0'; i++){
                word[length]=temp[i];
                length++;//長度多1，儲存後面的值
            }
        }else{
            for(int i=length; i>=0; i--)
                word[i+strlen(temp)]=word[i];
            for(int i=0; temp[i]!='\0'; i++)
                word[i]=temp[i];
        }
    }

    printf("%s\n",word);
}