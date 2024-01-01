#include<stdio.h>

struct suit_record{
    /* data */
    char suit;
    int point;
};

int main(){
    FILE *fptr=fopen("test.txt","r");

    struct suit_record cards[1000];

    char row[80];
    for(int i=0; fgets(row,80,fptr)!=NULL; i++){
        sscanf(row,"%c%d",&cards[i].suit,&cards[i].point);
    }
    for(int i=0; cards[i].point!=0; i++){
        printf("%c %d",cards[i].suit, cards[i].point);
    }
    
    //小題f
    int i=0;
    char sum_suit[4]={0};
    while(cards[i].point!=0){
        switch (cards[i].suit){
            case 'S':
                sum_suit[0]++;
                break;
            case 'H':
                sum_suit[1]++;
                break;
            case 'D':
                sum_suit[2]++;
                break;
            case 'C':
                sum_suit[3]++;
                break;
            default:
                break;
        }
        i++;
    }

    printf("S %d\n",sum_suit[0]);
    printf("H %d\n",sum_suit[1]);
    printf("D %d\n",sum_suit[2]);
    printf("C %d\n",sum_suit[3]);

    //小題k
    int sum_point[13]={0};
    for(int i=0; cards[i].point!=0; i++)
        sum_point[cards[i].point-1]++;


    printf("K\t%d\n",sum_point[12]);
    printf("Q\t%d\n",sum_point[11]);
    printf("J\t%d\n",sum_point[10]);
    printf("10\t%d\n",sum_point[9]);

    for(int i=9; i>0; i--)
        printf("%d\t%d\n", i, sum_point[i-1]);
    
    fclose(fptr);
    
}
