#include <cstdio>
#include <cstring>

int hashtable[128]={0};
int miss=0;

int change(char c){
    return c-'0';
}

int main(){
    char whole[1001],target[1001];
    scanf("%s",whole);
	getchar();
	scanf("%s",target);
    int len1=strlen(whole);
    int len2=strlen(target);

    for(int i=0;i<len1;i++){
        int id=change(whole[i]);
        hashtable[id]++;//ÑÕÉ«¼ÓÒ»
    }
    for(int i=0;i<len2;i++){
        int id=change(target[i]);
        hashtable[id]--;
        if(hashtable[id]<0){
            miss++;
        }
    }
    if(miss>0) printf("No %d\n",miss);
    else printf("Yes %d\n",(len1-len2));
    return 0;
}
