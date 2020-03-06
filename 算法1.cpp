/*害死人不偿命的（3n+1）猜想，
对任意自然数n,如果是偶数，则砍一半，奇数则把（3n+1）砍一半，
最后一定会n=1。
*/
#include <cstdio.h>
int main(){
    int n,count=0;
	//给要测试的数n
    scanf("%d",&n);
     
    while(n!=1){
        if(n%2!=0){//是奇数
           n=(3*n+1)/2;
        }else{//是偶数
            n/=2;
        }
        count++;
    }
    printf("%d",count);
}