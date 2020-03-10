#include <stdio.h>
//数组循环右移，不准使用数组  且要求移动次数要少

//求最大公约数
int gcd(int a,int b){
    if(b==0) return 0;
    else return gcd(b,a%b);
}

int main(){
    int a[110];
    //pos是存放当前处理的位置，next为下一个处理位置
    int n,m,temp,pos,next;
    scanf("%d%d",&n,&m);
    //输入数组
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //修正m
    m=m%n;
    if(m!=0){//如果m==0,直接输出数组即可，不需要执行这部分
        //先求公约数
        int d=gcd(n,m);
        for(int i=n-m;i<n-m+d;i++){
            temp=a[i];//拿走当前位置元素
            pos=i;//记录当前处理的位置
            do{
                //计算下一个处理的位置
                next=(pos-m+n)%n;

                //如果下一个位置不是初始点，则把下一个位置的元素复制给当前处理位置
                if(next!=i){
                    a[pos]=a[next];
                }
                else{//把一开始拿走的元素赋值给最后的这个空位置
                    a[pos]=temp;
                }
                //传递位置
                pos=next;
            }while(pos!=i);//循环到初始位置结束
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i<n-1){
            printf(" ");
        }
    }
    return 0;
}
