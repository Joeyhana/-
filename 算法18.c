#include <stdio.h>
int change(char c){
    if(c=='B') return 0;
    if(c=='C') return 1;
    if(c=='J') return 2;
}

int main(){
    char mp[3]={'B','C','J'};
    int n;
    scanf("%d",&n);
    //��¼AӮƽ�� �� BӮƽ�� �Ĵ���
    int A[3]={0},B[3]={0};
    //��¼AӮ������ �� BӮ������ �Ĵ���
    int Away[3]={0},Bway[3]={0};
    char c1,c2;
    int k1,k2;

    for(int i=0;i<n;i++){

        //scanfʹ��%c�Ὣ\n���룬������ڴ˴���getchar���տո�
        getchar();
        //A,B������
        scanf("%c %c",&c1,&c2);
        //ת��Ϊ����
        k1=change(c1);
        k2=change(c2);

        if((k1+1)%3==k2){//AӮ
            A[0]++;//AӮ+1
            B[2]++;//B��+1
            Away[k1]++;//A��k1����Ӯ�Ĵ���+1
        }else if(k1==k2){//ƽ��
            A[1]++;//Aƽ+1
            B[1]++;//Bƽ+1
        }else{
            A[2]++;//AӮ+1
            B[0]++;//B��+1
            Bway[k2]++;//B��k2����Ӯ�Ĵ���+1
        }
    }
    printf("%d %d %d\n",A[0],A[1],A[2]);
    printf("%d %d %d\n",B[0],B[1],B[2]);

    int id1=0,id2=0;
    //��AB��ʤ�Ĵ�����������
    for(int i=0;i<3;i++){
        if(Away[i]>Away[id1]) id1=i;
        if(Bway[i]>Bway[id2]) id2=i;
    }
    printf("%c %c",mp[id1],mp[id2]);

    return 0;
}
