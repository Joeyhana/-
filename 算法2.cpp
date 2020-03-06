#include <stdio.h> 
#include <string.h> 
#include<stdlib.h>


int main(){
    char strnum[101];
    int num[12],i,j,k=0,sum=0;
    char pingyin[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

    //获取输入
    scanf("%s",strnum);

    for(i=0;i<strlen(strnum);i++){
        sum += strnum[i] - '0';
    }

    //分解出个个位置的数
    while(sum!=0){
        num[k++]=sum%10;
        sum/=10;
    }

    for(j=k-1;j>=0;j--){
        printf("%s",pingyin[num[j]]);
        if(j>0){
            printf(" ");
        }else{
            printf("\n");
        }
    }
    return 0;
}



