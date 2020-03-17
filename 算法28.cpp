#include <cstdio>
struct person{
    char name[10];//姓名
    int yy,mm,dd;//日期
}oldest,youngest,left,right,temp;
//------------------很妙--------------
bool small(person a,person b){
    if(a.yy!=b.yy) return a.yy<=b.yy;
    else if(a.mm !=b.mm) return a.mm<=b.mm;
    else return a.dd<=b.dd;
}

bool big(person a,person b){
    if(a.yy!=b.yy) return a.yy>=b.yy;
    else if(a.mm !=b.mm) return a.mm>=b.mm;
    else return a.dd>=b.dd;
}

void init(){
    youngest.yy=left.yy=1814;
    oldest.yy=right.yy=2014;
    youngest.mm=left.mm=oldest.mm=right.mm=9;
    youngest.dd=left.dd=oldest.dd=right.dd=6;
}

int main(){
    init();
    int n,num=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d/%d/%d",temp.name,&temp.yy,&temp.mm,&temp.dd);
        if(big(temp,left)&&small(temp,right)){//合法日期
            num++;
            if(small(temp,oldest)) oldest=temp;
            if(big(temp,youngest)) youngest=temp;
        }
    }
    if(num==0) printf("0\n");
    else printf("%d %s %s\n",num,oldest.name,youngest.name);

    return 0;
}
