#include <Cstdio>
const int N =54;
//s:黑桃，h:红桃,c：梅花,d：方片,j:大小王
char mp[5]={'S','H','C','D','J'};
int start[N+1],end[N+1],next[N+1];

int main(){
    int k;
    scanf("%d",&k);
    //初始化牌
    for(int i=1;i<=N;i++){
        start[i]=i;
    }
    //输入指定的牌的调换顺序
    for(int i=1;i<=N;i++){
        scanf("%d",&next[i]);
    }
    //执行操作
    for(int step=0;step<k;step++){
        for(int i=1;i<=N;i++){
            //将第i张牌，放置于指定的位置
            end[next[i]]=start[i];
        }
        for(int i=1;i<=N;i++){
            //将end赋给tart 准备下一轮
            start[i]=end[i];
        }
    }
    //输出结果
    for(int i=1;i<=N;i++){
        if(i!=1) printf(" ");
        start[i]--;
        printf("%c%d",mp[start[i]/13],start[i]%13+1);
    }
    return 0;
}
