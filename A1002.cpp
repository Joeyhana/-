#include <cstdio>
//����ʽ���
const int MAX=1111;
double p[MAX]={};
int main(){
    int k,n,count=0;
    double a;
    //����ʽA
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d %lf",&n,&a);
        p[n]+=a;
    }
    //����ʽA+B
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d %lf",&n,&a);
        p[n]+=a;
    }

    for(int i=0;i<MAX;i++){
        if(p[i]!=0){
            count++;
        }
    }
    printf("%d",count);

    for(int i=MAX-1;i>=0;i--){
        if(p[i]!=0){
            printf(" %d %.1f",i,p[i]);
        }
    }
    return 0;
}

