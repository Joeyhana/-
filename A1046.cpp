#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX=100005;
//dis[i]表示从一号结点顺时针到达i号结点,nextDis[i]存i和i+1的距离
int dis[MAX],nextDis[MAX];

int main(){
    int sum=0,query,n,left,right;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&nextDis[i]);
        sum+=nextDis[i];
        //预处理dis[] 可以降低查询时候的时间复杂度
        dis[i]=sum;
    }
    scanf("%d",&query);
    for(int i=0;i<query;i++){
        scanf("%d%d",&left,&right);
        //left>right时候，交换。
        if(left>right) swap(left,right);
        int temp=dis[right-1]-dis[left-1];
        printf("%d\n",min(temp,sum-temp));
    }
    return 0;
}
