#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxn=100010;
const int MOD=1000000007;

char s[maxn];
int leftNump[maxn]={0};

int main(){
    scanf("%s",s);
    int len=strlen(s);
    for(int i =0;i<len;i++){
        if(i>0){
            leftNump[i]=leftNump[i-1];
        }
        if(s[i]=='P'){
            leftNump[i]++;
        }
    }
    int ans=0,rightNumT=0;
    for(int i=len-1;i>=0;i--){
        if(s[i]=='T'){
            rightNumT++;
        }else if(s[i]=='A'){
            ans=(ans+leftNump[i]*rightNumT)%MOD;
        }
    }
    printf("%d\n",ans);
    return 0;
}
