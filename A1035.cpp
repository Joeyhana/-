#include <cstdio>
#include <cstring>

struct node{
    char name[20],pwd[20];
    bool ischange;
}T[1005];

//判断passord 是否需要修改
//参数用&，表示可以修改参数
void crypt(node& t,int& cnt){
    int len =strlen(t.pwd);
    for(int i=0;i<len;i++){
        if(t.pwd[i]=='1'){
            t.pwd[i]='@';
            t.ischange=true;
        }else if(t.pwd[i]=='0'){
            t.pwd[i]='%';
            t.ischange=true;
        }else if(t.pwd[i]=='O'){
            t.pwd[i]='o';
            t.ischange=true;
        }else if(t.pwd[i]=='l'){
            t.pwd[i]='L';
            t.ischange=true;
        }
    }
    if(t.ischange){
        cnt++;
    }
}

int main(){
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %s",T[i].name,T[i].pwd);
        T[i].ischange=false;
    }
    for(int i=0;i<n;i++){
        crypt(T[i],cnt);
    }
    if(cnt==0){
        if(n==1){
            printf("There is %d account and no account is modified",n);
        }else{
            printf("There is %d accounts and no account is modified",n);
        }
    }else{
        printf("%d\n",cnt);
        for(int i=0;i<n;i++){
            if(T[i].ischange){
                printf("%s %s\n",T[i].name,T[i].pwd);
            }
        }
    }
    return 0;
}
