#include<cstdio>
#include<algorithm>
using namespace std;

int hastable[1005];

int main(){
    int n,m,a;
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){
        scanf("%d",&a);
        ++hastable[a];
    }
    for(int i=0;i<m;i++){
        if(hastable[i]&&hastable[m-i]){
            if(i==m-i&&hastable[i]<=1){
                continue;
            }
            printf("%d %d\n",i,m-i);
            return 0;
        }
    }
    printf("No Solution\n");
    return 0;
}
