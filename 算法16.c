#include <stdio.h>

int main(){
    long long a,b,da,db,pa=0 ,pb=0;
    //ÊäÈë
    scanf("%lld %lld %lld %lld",&a,&da,&b,&db);
    while(a!=0){//±éÀú a
        if(a%10==da) pa=pa*10+da;
        a=a/10;
    }
    while(b!=0){
        if(b%10==db) pb=pb*10+db;
        b=b/10;
    }
    printf("%lld\n",pa+pb);

    return 0;
}
