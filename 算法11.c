//��Ϊ��������[2^-31,2^31],�� int �ķ�Χ�� [2^-31,2^31-1]�������� long long
#include <stdio.h>
int main(){
    int n,t=1;
    long long a,b,c;

    //����������
    scanf("%d",&n);
    while(n--){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c){
            printf("Case #%d: true\n",t++);
        }else{
            printf("Case #%d: false\n",t++);
        }
    }
    return 0;
}
