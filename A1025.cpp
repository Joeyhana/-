#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

struct student{
    char id[15];
    //exam_no考场号,exam_rank考场内排名
    int score,exam_no,exam_rank;
}stu[30010];

bool cmp(student a,student b){
    if(a.score!=b.score) return a.score>b.score;
    else return strcmp(a.id,b.id)<0;
}

int main(){
    int n,k,num=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%s %d",stu[num].id,&stu[num].score);
            stu[num].exam_no=i;
            num++;
        }

        sort(stu+num-k,stu+num,cmp);
        stu[num-k].exam_rank=1;

        for(int j=num-k+1;j<num;j++){
            if(stu[j].score==stu[j-1].score){
                stu[j].exam_rank=stu[j-1].exam_rank;
            }else{
                stu[j].exam_rank=j+1-num+k;
            }
        }
    }
    printf("%d\n",num);
    sort(stu,stu+num,cmp);
    int r=1;
    for(int i=0;i<num;i++){
        if(i>0&&stu[i].score!=stu[i-1].score){
            r=i+1;
        }
        printf("%s ",stu[i].id);
        printf("%d %d %d\n",r,stu[i].exam_no,stu[i].exam_rank);
    }
    return 0;
}
