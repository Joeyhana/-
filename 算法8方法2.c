#include <stdio.h>
//����ѭ�����ƣ���׼ʹ������  ��Ҫ���ƶ�����Ҫ��

int main(){
    int a[110];
    //pos�Ǵ�ŵ�ǰ�����λ�ã�nextΪ��һ������λ��
    int n,m,count=0;//��¼�Ѿ�����ĸ���
    scanf("%d%d",&n,&m);

    //����m
    m=m%n;

    //��������
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //���n-m��n-1��
    for(int i=n-m;i<n;i++){
        printf("%d",a[i]);
        count++;
        if(count<n){//����Ѿ�������ĸ���С��n��������ո�
            printf(" ");
        }
    }

    //���0��n-m-1��
    for(int i=0;i<n-m;i++){
        printf("%d",a[i]);
        count++;
        if(count<n){//����Ѿ�������ĸ���С��n��������ո�
            printf(" ");
        }
    }
    return 0;
}
