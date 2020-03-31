#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct Stu{
    char id[10];
    int de,cai,sum;
    int level;//考生类别
}stu[100010];

//判断函数
bool cmp(Stu a,Stu b){
    if(a.level!=b.level) return a.level<b.level;//类别小的在前
    else if(a.sum!=b.sum) return a.sum>b.sum;//类别相同，总分大的在前
    else if(a.de!=b.de) return a.de<b.de;//总分相同德分高的在前
    else return strcmp(a.id,b.id)<0;//德才相同准考证号小的在前
}

int main(){
    int n,L,H;
    scanf("%d%d%d",&n,&L,&H);
    int m=n;//及格人数m
    for(int i=0;i<n;i++){
        scanf("%s%d%d",stu[i].id,&stu[i].de,&stu[i].cai);
        stu[i].sum=stu[i].de+stu[i].cai;
        if(stu[i].de<L||stu[i].cai<L){
            stu[i].level=5;
            m--;
        }else if(stu[i].de>=H&&stu[i].cai>=H){
            stu[i].level=1;
        }else if(stu[i].de>=H&&stu[i].cai<H){
            stu[i].level=2;
        }else if(stu[i].de>=stu[i].cai){
            stu[i].level=3;
        }else{
            stu[i].level=4;
        }
    }
    //排序
    sort(stu,stu+n,cmp);
    printf("%d\n",m);
    for(int i=0;i<m;i++){
        printf("%s %d %d\n",stu[i].id,stu[i].de,stu[i].cai);
    }
    return 0;
}
