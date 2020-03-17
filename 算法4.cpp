#include <cstdio>
struct Stu{
    char name[15];//姓名
    char id[15];//准考证号
    int score;//考试成绩
}temp,max,min;

int main(){
    int n;
    scanf("%d",&n);
    max.score=-1;
    min.score=101;
    for(int i=0;i<n;i++){
        scanf("%s%s%d",temp.name,temp.id,&temp.score);
        if(temp.score>max.score) max=temp;
        if(temp.score<min.score) min=temp;
    }
    printf("%s %s\n",max.name,max.id);
    printf("%s %s\n",min.name,min.id);

    return 0;
}
