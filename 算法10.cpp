#include <cstdio>
//��һԪ����ʽ
int main(){
    int a[1010]={0s};
    //k��ϵ�� e���ݴ� count�ǲ�Ϊ0�ĵ��������
    int k,e,count=0;
    while(scanf("%d%d",&k,&e)!=EOF){
        a[e]=k;
    }
    //������󵼺���ȻΪ0
    a[0]=0;
    for(int i=1;i<=1000;i++){
        a[i-1]=a[i]*i;
        a[i]=0;//����ʡ��
        if(a[i-1]!=0) count++;
    }
    //������� �󵼺� ��0
    if(count==0) printf("0 0");
    else{
        for(int i=1000;i>=0;i--){
            if(a[i]!=0){
                printf("%d %d",a[i],i);
                count--;
                if(count!=0) printf(" ");
            }
        }
    }
    return 0;
}
