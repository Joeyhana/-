#include <Cstdio>
const int N =54;
//s:���ң�h:����,c��÷��,d����Ƭ,j:��С��
char mp[5]={'S','H','C','D','J'};
int start[N+1],end[N+1],next[N+1];

int main(){
    int k;
    scanf("%d",&k);
    //��ʼ����
    for(int i=1;i<=N;i++){
        start[i]=i;
    }
    //����ָ�����Ƶĵ���˳��
    for(int i=1;i<=N;i++){
        scanf("%d",&next[i]);
    }
    //ִ�в���
    for(int step=0;step<k;step++){
        for(int i=1;i<=N;i++){
            //����i���ƣ�������ָ����λ��
            end[next[i]]=start[i];
        }
        for(int i=1;i<=N;i++){
            //��end����tart ׼����һ��
            start[i]=end[i];
        }
    }
    //������
    for(int i=1;i<=N;i++){
        if(i!=1) printf(" ");
        start[i]--;
        printf("%c%d",mp[start[i]/13],start[i]%13+1);
    }
    return 0;
}
