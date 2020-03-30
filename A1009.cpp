#include <cstdio>
//多项式乘法

struct poly{   //幂次
    int exp;
    //系数
    double cof;
}poly[1001];//多项式

//因为是乘法 所以结果存放长度是2001
double result[2001];

int main(){
    int n,m,num=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %lf",&poly[i].exp,&poly[i].cof);
    }

    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int exp;
        double cof;
        //第二个多项式的指数和系数
        scanf("%d %lf",&exp,&cof);

        for(int j=0;j<n;j++){//与第一个多项式的每一项相乘
            result[exp+poly[j].exp] += (cof*poly[j].cof);
        }
    }

    for(int i=0;i<2001;i++){
        if(result[i]!=0.0) num++;
    }
    printf("%d",num);
    for(int i=2000;i>=0;i--){
        if(result[i]!=0.0){
            printf(" %d %.1f",i,result[i]);
        }
    }
    return 0;
}
