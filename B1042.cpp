#include <cstdio>
#include <cstring>

int hashtable[128]={0};
char ch;

int main(){
    while((ch=getchar())!='\n'){
        if(ch<='Z'&&ch>='A') hashtable[ch-'A']++;
        if(ch<='z'&&ch>='a') hashtable[ch-'a']++;
    }
    int k;
    for(int i=0;i<26;i++){
        if(hashtable[i]>hashtable[k]){
            k=i;
        }
    }
    printf("%c %d",k+'a',hashtable[k]);
    return 0;
}
