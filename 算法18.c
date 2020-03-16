#include <stdio.h>
int change(char c){
    if(c=='B') return 0;
    if(c=='C') return 1;
    if(c=='J') return 2;
}

int main(){
    char mp[3]={'B','C','J'};
    int n;
    scanf("%d",&n);
    //记录A赢平输 和 B赢平输 的次数
    int A[3]={0},B[3]={0};
    //记录A赢的手势 和 B赢的手势 的次数
    int Away[3]={0},Bway[3]={0};
    char c1,c2;
    int k1,k2;

    for(int i=0;i<n;i++){

        //scanf使用%c会将\n读入，因此需在此处用getchar吸收空格
        getchar();
        //A,B的手势
        scanf("%c %c",&c1,&c2);
        //转化为数字
        k1=change(c1);
        k2=change(c2);

        if((k1+1)%3==k2){//A赢
            A[0]++;//A赢+1
            B[2]++;//B输+1
            Away[k1]++;//A靠k1手势赢的次数+1
        }else if(k1==k2){//平局
            A[1]++;//A平+1
            B[1]++;//B平+1
        }else{
            A[2]++;//A赢+1
            B[0]++;//B输+1
            Bway[k2]++;//B靠k2手势赢的次数+1
        }
    }
    printf("%d %d %d\n",A[0],A[1],A[2]);
    printf("%d %d %d\n",B[0],B[1],B[2]);

    int id1=0,id2=0;
    //找AB获胜的次数最多的手势
    for(int i=0;i<3;i++){
        if(Away[i]>Away[id1]) id1=i;
        if(Bway[i]>Bway[id2]) id2=i;
    }
    printf("%c %c",mp[id1],mp[id2]);

    return 0;
}
