#include <cstdio>
#include <cstring>

int hashtable[6]={0},sum=0;
char STR[10001],dict={'P','A','T','e','s','t'};

int main(){
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=0;j<6;j++){
            if(str[i]==dict[j]){
                hashtable[j]++;
                sum++;
            }
        }
    }
    while(sum>0){
        for(int i=0;i<6;i++){
            if(hashtable[i]>0){
                printf("%c",dict[i]);
                hashtable[i]--;
                sum--;
            }
        }
    }
    return 0;
}
