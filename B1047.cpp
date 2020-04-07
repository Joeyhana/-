#include <cstdio>

int hashtable[1001]={0};

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int team,member,score;
        scanf("%d-%d %d",&team,&member,&score);
        hashtable[team]+=score;
    }
    int k=0;
    for(int i=1;i<1001;i++){
        if(hashtable[i]>hashtable[k]){
            k=i;
        }
    }
    printf("%d %d\n",k,hashtable[k]);
    return 0;
}

