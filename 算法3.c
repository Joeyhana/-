#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j;
    char str[200];
    scanf("%d",&n);

    //输入要测试的字符串 并进行判断
    for(i=0;i<n;i++){
        scanf("%s",str);

    //记录字符P，A，T以及其他字符的个数
    int nP=0,nT=0,nA=0,others=0;

    //记录P，T出现的位置
    int pP=0,pT=0;

    //str.split("P","T");
    for(j=0;j<strlen(str);j++) {
        if(str[j]=='P'){
            nP++;
            pP=j;
        }else if(str[j]=='A')
            nA++;
        else if(str[j]=='T'){
            nT++;
            pT=j;
        }else{
            others++;
        }
    }

    if(nP==1 && nT==1 && nA>=1 && others==0 && (pP)*(pT-pP-1)==(strlen(str)-pT-1))
        printf("YES\n");
    else
        printf("NO\n");
    }

    return 0;
}
