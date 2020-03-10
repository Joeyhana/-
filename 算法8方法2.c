#include <stdio.h>
//数组循环右移，不准使用数组  且要求移动次数要少

int main(){
    int a[110];
    //pos是存放当前处理的位置，next为下一个处理位置
    int n,m,count=0;//记录已经输出的个数
    scanf("%d%d",&n,&m);

    //修正m
    m=m%n;

    //输入数组
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //输出n-m到n-1号
    for(int i=n-m;i<n;i++){
        printf("%d",a[i]);
        count++;
        if(count<n){//如果已经输出数的个数小于n，则输出空格
            printf(" ");
        }
    }

    //输出0到n-m-1号
    for(int i=0;i<n-m;i++){
        printf("%d",a[i]);
        count++;
        if(count<n){//如果已经输出数的个数小于n，则输出空格
            printf(" ");
        }
    }
    return 0;
}
