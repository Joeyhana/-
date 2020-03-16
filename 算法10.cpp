#include <cstdio>
//求导一元多项式
int main(){
    int a[1010]={0s};
    //k是系数 e是幂次 count是不为0的导数项个数
    int k,e,count=0;
    while(scanf("%d%d",&k,&e)!=EOF){
        a[e]=k;
    }
    //零次项求导后仍然为0
    a[0]=0;
    for(int i=1;i<=1000;i++){
        a[i-1]=a[i]*i;
        a[i]=0;//不可省略
        if(a[i-1]!=0) count++;
    }
    //特殊情况 求导后 是0
    if(count==0) printf("0 0");
    else{
        for(int i=1000;i>=0;i--){
            if(a[i]!=0){
                printf("%d %d",a[i],i);
                count--;
                if(count!=0) printf(" ");
            }
        }
    }
    return 0;
}
