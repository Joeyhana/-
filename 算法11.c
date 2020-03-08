//因为给定区间[2^-31,2^31],而 int 的范围是 [2^-31,2^31-1]，所以用 long long
#include <stdio.h>
int main(){
    int n,t=1;
    long long a,b,c;

    //输入用例数
    scanf("%d",&n);
    while(n--){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c){
            printf("Case #%d: true\n",t++);
        }else{
            printf("Case #%d: false\n",t++);
        }
    }
    return 0;
}
