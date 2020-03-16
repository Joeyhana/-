#include <cstdio>

int main(){
    int T,tcase=1;
    scanf("%d",&T);

    while(T--){
        long long a,b,c,result;
        scanf("%lld%lld%lld",&a,&b,&c);
        result=a+b;
        bool flag;

        if(a>0&&b>0&&result<0)  flag=true;
        else if(a<0&&b<0 && result>=0)  flag=false;
        else if(result>c) flag=true;
        else flag=false;
        if(flag==true){
            printf("Case #%d: true\n",tcase++);
        }
        else{
            printf("Case #%d: false\n",tcase++);
        }
    }
    return 0;
}
