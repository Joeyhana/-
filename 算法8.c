#include <stdio.h>
//����ѭ�����ƣ���׼ʹ������  ��Ҫ���ƶ�����Ҫ��

//�����Լ��
int gcd(int a,int b){
    if(b==0) return 0;
    else return gcd(b,a%b);
}

int main(){
    int a[110];
    //pos�Ǵ�ŵ�ǰ�����λ�ã�nextΪ��һ������λ��
    int n,m,temp,pos,next;
    scanf("%d%d",&n,&m);
    //��������
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //����m
    m=m%n;
    if(m!=0){//���m==0,ֱ��������鼴�ɣ�����Ҫִ���ⲿ��
        //����Լ��
        int d=gcd(n,m);
        for(int i=n-m;i<n-m+d;i++){
            temp=a[i];//���ߵ�ǰλ��Ԫ��
            pos=i;//��¼��ǰ�����λ��
            do{
                //������һ�������λ��
                next=(pos-m+n)%n;

                //�����һ��λ�ò��ǳ�ʼ�㣬�����һ��λ�õ�Ԫ�ظ��Ƹ���ǰ����λ��
                if(next!=i){
                    a[pos]=a[next];
                }
                else{//��һ��ʼ���ߵ�Ԫ�ظ�ֵ�����������λ��
                    a[pos]=temp;
                }
                //����λ��
                pos=next;
            }while(pos!=i);//ѭ������ʼλ�ý���
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
