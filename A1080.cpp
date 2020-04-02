#include <cstdio>
#include<algorithm>
using namespace std;

struct student{
    //���Գɼ������Գɼ����ܷ֣������������ţ�ѧУ���
    int GE,GI,sum,r,stuid,cho[6];
}stu[40010];

struct school{
    //����������ʵ������������ѧ���ţ����һ�����յ�ѧ����
    int quota,stunum,id[40010],lastadmit;
}sch[110];

bool cmpstu(student a,student b){
    if(a.sum!=b.sum) return a.sum>b.sum;
    else return a.GE>b.GE;
}

bool cmpid(int a,int b){
    return stu[a].stuid<stu[b].stuid;
}

int main(){
    int n,m,k;
    //�������� ѧУ��  ������ѧУ��
    scanf("%d%d%d",&n,&m,&k);
    for(int i=0;i<m;i++){
        scanf("%d",&sch[i].quota);
        sch[i].stunum=0;
        sch[i].lastadmit=-1;
    }
    for(int i=0;i<n;i++){
        stu[i].stuid=i;
        scanf("%d%d",&stu[i].GE,&stu[i].GI);
        stu[i].sum=stu[i].GE+stu[i].GI;
        for(int j=0;j<k;j++){
            scanf("%d",&stu[i].cho[j]);
        }
    }
    sort(stu,stu+n,cmpstu);
    for(int i=0;i<n;i++){
        if(i>0&&stu[i].sum==stu[i-1].sum&&stu[i].GE==stu[i-1].GE){
            stu[i].r=stu[i-1].r;
        }else{
            stu[i].r=i;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int choice=stu[i].cho[j];
            int num=sch[choice].stunum;
            int last=sch[choice].lastadmit;
            if(num<sch[choice].quota||(last!=-1&&stu[i].r==stu[last].r)){
                sch[choice].id[num]=i;
                sch[choice].lastadmit=i;
                sch[choice].stunum++;
                break;
            }
        }
    }
    for(int i=0;i<m;i++){
        if(sch[i].stunum>0){
            sort(sch[i].id,sch[i].id+sch[i].stunum,cmpid);
            for(int j=0;j<sch[i].stunum;j++){
                printf("%d",stu[sch[i].id[j]].stuid);
                if(j<sch[i].stunum-1){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}





















