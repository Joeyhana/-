#include <stdio.h>
int main(){
    //s1,s2分别为甲喊的数，乙喊的数，
    //d1,d2,分别是甲比划的数，乙比划的数
    //count1,count2分别为甲喝的数，乙喝的数
    //n是划拳的轮数
    int n,s1,s2,d1,d2,count1=0,count2=0;
    scanf("%d\n",&n);
    while(n--){
        scanf("%d%d%d%d\n",&s1,&d1,&s2,&d2);
        //如果甲猜对 乙没有  乙喝
        if(s1+s2==d1 && s1+s2 !=d2){
            count2++;
        }else if(s1+s2==d2 && s1+s2!=d1){//如果乙猜对 甲没有  甲喝
            count1++;
        }
    }
    printf("%d %d\n",count1,count2);

    return 0;
}
