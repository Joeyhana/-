#include <cstdio>
#include <cmath>
int main(){
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int bottom=(int)sqrt(2.0*(n+1))-1;
    if(bottom%2==0) bottom--;
    int remain=n-(bottom+1)*(bottom+1)/2+1;
    //输出倒三角
    for(int i=bottom;i>=1;i-=2){
        for(int j=0;j<(bottom-i)/2;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    //输出正三角
    for(int i=3;i<=bottom;i+=2){
        for(int j=0;j<(bottom-i)/2;j++){
            printf(" ");
        }
        for(int j=0;j<1;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d\n",remain);
    return 0;
}
