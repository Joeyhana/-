/*�����˲������ģ�3n+1�����룬
��������Ȼ��n,�����ż������һ�룬������ѣ�3n+1����һ�룬
���һ����n=1��
*/
#include <cstdio.h>
int main(){
    int n,count=0;
	//��Ҫ���Ե���n
    scanf("%d",&n);
     
    while(n!=1){
        if(n%2!=0){//������
           n=(3*n+1)/2;
        }else{//��ż��
            n/=2;
        }
        count++;
    }
    printf("%d",count);
}