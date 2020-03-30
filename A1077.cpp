#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;


int n,minlen=256,ans=0;
char str[105][300];

int main(){
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        //解决pat 不能用gets的方法
        cin.getline(str[i],300);
        int len=strlen(str[i]);
        if(len<minlen) minlen=len;

        for(int j=0;j<len/2;j++){
            char temp=str[i][j];
            str[i][j]=str[i][len-1-j];
            str[i][len-1-j]=temp;
        }
    }

    for(int i=0;i<minlen;i++){
        char c=str[0][i];
        bool same=true;

        for(int j=1;j<n;j++){
            if(c!=str[j][i]){
                same=false;
                break;
            }
        }
        if(same==true) ans++;
        else break;
    }

    if(ans!=0){
        for(int i=ans-1;i>=0;i--){
            printf("%c",str[0][i]);
        }
    }else{
        printf("nai");
    }
    return 0;
}
