#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn=100010;
const int INF=0x3fffffff;

int a[maxn],leftmax[maxn],rightmin[maxn];
int ans[maxn],num=0;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    leftmax[0]=0;
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],a[i-1]);
    }
    rightmin[n-1]=INF;
    for(int i=n-2;i>=0;i--){
        rightmin[i]=min(rightmin[i+1],a[i+1]);
    }
    for(int i=0;i<n;i++){
        if(leftmax[i]<a[i]&&rightmin[i]>a[i]){
            ans[num++]=a[i];
        }
    }
    printf("%d\n",num);
    for(int i=0;i<num;i++){
        printf("%d",ans[i]);
        if(i<num-1) printf(" ");
    }
    printf("\n");
    return 0;
}



