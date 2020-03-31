#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

struct Stu{
    int id;
    int grade[4];
}stu[2010];

char course[4]={'A','C','M','E'};//按照优先级排序
int ranks[1000000][4]={0};//ranks[id][0]~ranks[id][4]为四门课的排名
int now;

bool cmp(Stu a,Stu b){
    return a.grade[now]>b.grade[now];
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d%d%d%d",&stu[i].id,&stu[i].grade[1],&stu[i].grade[2],&stu[i].grade[3]);
        stu[i].grade[0]=round((stu[i].grade[1]+stu[i].grade[2]+stu[i].grade[3])/3.0)+0.5;
    }

    for(now=0;now<4;now++){
        sort(stu,stu+n,cmp);//排序
        ranks[stu[0].id][now]=1;//分数最高的是rank1
        for(int i=1;i<n;i++){
            if(stu[i].grade[now]==stu[i-1].grade[now]){
                ranks[stu[i].id][now]=ranks[stu[i-1].id][now];
            }else{
                ranks[stu[i].id][now]=i+1;
            }
        }
    }
    int query;
    for(int i=0;i<m;i++){
        scanf("%d",&query);
        if(ranks[query][0]==0){
            printf("N/A\n");
        }else{
            int k=0;
            for(int j=0;j<4;j++){
                if(ranks[query][j]<ranks[query][k]){
                    k=j;
                }
            }
            printf("%d %c\n",ranks[query][k],course[k]);
        }

    }
    return 0;
}
