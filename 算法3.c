#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j;
    char str[200];
    scanf("%d",&n);

    //����Ҫ���Ե��ַ��� �������ж�
    for(i=0;i<n;i++){
        scanf("%s",str);

    //��¼�ַ�P��A��T�Լ������ַ��ĸ���
    int nP=0,nT=0,nA=0,others=0;

    //��¼P��T���ֵ�λ��
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
