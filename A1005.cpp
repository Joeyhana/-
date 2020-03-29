#include <stdio.h>
#include <string.h>

char num[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
char s[111];
int digit[10];
int main(){
    //ªÒ»° ‰»Î
    scanf("%s",s);
    int len=strlen(s);
    int sum=0,numlen=0;

    for(int i=0;i<len;i++){
        sum += (s[i] - '0');
    }
    if(sum==0){
        printf("%s",num[0]);
    }else{
        while(sum!=0){
            digit[numlen++]=sum%10;
            sum/=10;
        }
        for(int i=numlen-1;i>=0;i--){
            printf("%s",num[digit[i]]);
            if(i!=0) printf(" ");
        }
    }
    return 0;
}
