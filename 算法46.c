#include <stdio.h>
int main(){
    //s1,s2�ֱ�Ϊ�׺��������Һ�������
    //d1,d2,�ֱ��ǼױȻ��������ұȻ�����
    //count1,count2�ֱ�Ϊ�׺ȵ������Һȵ���
    //n�ǻ�ȭ������
    int n,s1,s2,d1,d2,count1=0,count2=0;
    scanf("%d\n",&n);
    while(n--){
        scanf("%d%d%d%d\n",&s1,&d1,&s2,&d2);
        //����ײ¶� ��û��  �Һ�
        if(s1+s2==d1 && s1+s2 !=d2){
            count2++;
        }else if(s1+s2==d2 && s1+s2!=d1){//����Ҳ¶� ��û��  �׺�
            count1++;
        }
    }
    printf("%d %d\n",count1,count2);

    return 0;
}
