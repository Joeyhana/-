#include <cstdio>
const int maxn=100010;
int school[maxn]={0};

int main(){
    int n,schId,score;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&schId,&score);
        school[schId]+=score;
    }
    int max=1;
    for(int i=2;i<=n;i++){
        if(school[i]>school[max]){
            max=i;
        }
    }
    printf("%d %d",max,school[max]);
    return 0;
}
