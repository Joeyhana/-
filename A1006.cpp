#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
struct person{//ans1������ǩ�� ans������ǩ���
    char id[20];
    int hh,mm,ss;
}temp,ans1,ans2;

bool great(person p1,person p2){//p1ʱ�����p2��ʱ��÷���true
    if(p1.hh!=p2.hh) return p1.hh>p2.hh;
    if(p1.mm!=p2.mm) return p1.mm>p2.mm;
    return p1.ss>p2.ss;
}

int main(){
	int n;
	scanf("%d",&n);
	ans1.hh=24,ans1.mm=60,ans1.ss=60;//��ʼǩ��ʱ�����ó����
	ans2.hh=0,ans2.mm=0,ans2.ss=0;//��ʼǩ��ʱ�����ó���С
	for(int i = 0; i < n; i++){
		//����ǩ��ʱ��
		scanf("%s %d:%d:%d",temp.id,&temp.hh,&temp.mm,&temp.ss);
		if(great(temp,ans1)==false) ans1=temp;
		scanf("%d:%d:%d",&temp.hh,&temp.mm,&temp.ss);
		if(great(temp,ans2)==true) ans2=temp;
	}
	printf("%s %s\n",ans1.id,ans2.id);
	return 0;
}
