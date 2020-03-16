#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX=100005;
//dis[i]��ʾ��һ�Ž��˳ʱ�뵽��i�Ž��,nextDis[i]��i��i+1�ľ���
int dis[MAX],nextDis[MAX];

int main(){
    int sum=0,query,n,left,right;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&nextDis[i]);
        sum+=nextDis[i];
        //Ԥ����dis[] ���Խ��Ͳ�ѯʱ���ʱ�临�Ӷ�
        dis[i]=sum;
    }
    scanf("%d",&query);
    for(int i=0;i<query;i++){
        scanf("%d%d",&left,&right);
        //left>rightʱ�򣬽�����
        if(left>right) swap(left,right);
        int temp=dis[right-1]-dis[left-1];
        printf("%d\n",min(temp,sum-temp));
    }
    return 0;
}
