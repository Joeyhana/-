#include <cstdio>
#include <algorithm>
using namespace std;
const int Max = 100010;
int  sum[Max] = {0}, total, M;
int upper(int l, int r, int x){
    while(l < r){
        int mid = (l+r)/2;
        if(sum[mid] < x)
            l = mid+1;
        else
            r = mid;
    }
    return l;
}
int main()
{
    int nears = 1000000000;
    scanf("%d%d", &total, &M);
    for(int i = 1; i <= total; i++ ){
        scanf("%d", &sum[i]);
        sum[i] += sum[i-1];
    }
    for(int i = 1; i <= total; i++){
        int j = upper(i, total+1, sum[i-1] + M) ;
        if(sum[j-1] - sum[i-1] == M){
            nears = M;
            break;
        }
        else if(j <= total && sum[j-1] - sum[i-1] < M){
            nears = min(nears, sum[j]- sum[i-1]);
        }
    }
    for(int i = 1; i <= total; i++){
        int j = upper(i, total+1, sum[i-1]+nears);
        if(sum[j] - sum[i-1] == nears){
            printf("%d-%d\n", i, j);
        }
    }
    return 0;
}
