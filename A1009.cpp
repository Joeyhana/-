#include <cstdio>
//����ʽ�˷�

struct poly{   //�ݴ�
    int exp;
    //ϵ��
    double cof;
}poly[1001];//����ʽ

//��Ϊ�ǳ˷� ���Խ����ų�����2001
double result[2001];

int main(){
    int n,m,num=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %lf",&poly[i].exp,&poly[i].cof);
    }

    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int exp;
        double cof;
        //�ڶ�������ʽ��ָ����ϵ��
        scanf("%d %lf",&exp,&cof);

        for(int j=0;j<n;j++){//���һ������ʽ��ÿһ�����
            result[exp+poly[j].exp] += (cof*poly[j].cof);
        }
    }

    for(int i=0;i<2001;i++){
        if(result[i]!=0.0) num++;
    }
    printf("%d",num);
    for(int i=2000;i>=0;i--){
        if(result[i]!=0.0){
            printf(" %d %.1f",i,result[i]);
        }
    }
    return 0;
}
