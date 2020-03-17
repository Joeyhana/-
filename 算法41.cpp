#include <cstdio>
const int maxn=1010;

struct Stu{
    long long id;//准考证号
    int examSeat;//考试座位号
}testSeat[maxn];//机试座位号当作数组的下标

int main(){
    int n,m,seat,examSeat;
    long long id;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %d %d",&id,&seat,&examSeat);
        testSeat[seat].id=id;
        testSeat[seat].examSeat=examSeat;
    }

    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&seat);
        printf("%lld %d\n",testSeat[seat].id,testSeat[seat].examSeat);
    }
    return 0;
}
