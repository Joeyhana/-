#include <cstdio>
#include <cstring>

int main(){
    int num=0;
    char week[7][5]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    char str[4][70];
    while(scanf("%s",str[num])!=EOF){
        num++;
    }
    int s1=strlen(str[0]);
    int s2=strlen(str[1]);
    int s3=strlen(str[2]);
    int s4=strlen(str[3]);
    int i;
    for(i=0;i<s1&&i<s2;i++){
        if(str[0][i]==str[1][i]&&str[0][i]>='A'&&str[0][i]<='G'){
            printf("%s ",week[str[0][i]-'A']);
            break;
        }
    }
    for(num=i+1;num<s1&&i<s2;num++){
        if(str[0][num]==str[1][num]){
            if(str[0][num]>='0'&&str[0][num]<='9'){
                printf("%02d:",str[0][num]-'0');
                break;
            }else if(str[0][num]>='A'&&str[0][num]<='N'){
                printf("%02d:",str[0][num]-'A'+10);
                break;
            }
        }
    }
    for(i=0;i<s3&&i<s4;i++){
        if(str[2][i]==str[3][i]){
            if((str[2][i]>='A'&&str[2][i]<='Z')||(str[2][i]>='a'&&str[2][i]<='z')){
                printf("%02d",i);
                break;
            }
        }
    }
    return 0;
}
