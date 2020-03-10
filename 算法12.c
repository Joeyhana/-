#include <stdio.h>

int main(){
    //count 存五类数字的个数 ans 存五类数字的输出结果
    int n,temp;
    int count[5]={0};
    int ans[5]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        //判断A1类
        if(temp%5==0 && temp%2==0){
            ans[0]+=temp;
            count[0]++;
        }
        //判断A2类
        if(temp%5==1){
            if(count[1]%2==0){
                ans[1]+=temp;
            }else{
                ans[1]-=temp;
            }
            count[1]++;
        }
        //判断A3类
        if(temp%5==2){
            count[2]++;
        }
        //判断A4类
        if(temp%5==3){
            ans[3]+=temp;
            count[3]++;
        }
        //判断A5类
        if(temp%5==4){
            if(ans[4]<temp){
               ans[4]=temp;
            }
            count[4]++;
        }
    }

    //输出
    if(count[0]==0) printf("N ");
    else printf("%d ",ans[0]);

    if(count[1]==0) printf("N ");
    else printf("%d ",ans[1]);

    if(count[2]==0) printf("N ");
    else printf("%d ",count[2]);

    if(count[3]==0) printf("N ");
    else printf("%.1f ",  (double)ans[3] / count[3]);

    if(count[4]==0) printf("N");
    else printf("%d",ans[4]);

    return 0;
}
