#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
const int maxn=10010;

struct Car{
	char id[8];
	int time;
	char status[4];
}all[maxn],valid[maxn];//allΪ���м�¼��validΪ��Ч��¼

//��Ч��¼����
int num=0;
//���ƺ�->��ͣ��ʱ��
map<string,int>parktime;
int timeToInt(int hh,int mm,int ss){
    return hh*3600+mm*60+ss;
}
//�Ȱ����ƺ��ֵ����С�������������ƺ���ͬ����ʱ���С��������
bool cmpByIdAndTime(Car a,Car b){
	if(strcmp(a.id,b.id))return strcmp(a.id,b.id)<0;
	else return a.time<b.time;
}
//��ʱ���С��������
bool cmpByTime(Car a,Car b){
	return a.time<b.time;
}

int main(){
    int n,k,hh,mm,ss;
	scanf("%d%d", &n,&k);
	for(int i = 0; i < n; i++){
		scanf("%s %d:%d:%d %s", all[i].id,&hh,&mm,&ss,all[i].status);
		all[i].time=timetoint(hh,mm,ss);
    }
	sort(all,all+n,cmpbyidtime);

	int maxtime=-1;
	for(int i=0;i<n-1;i++){
        if(!strcmp(all[i].id,all[i+1].id)&& !strcmp(all[i].status,"in") && !strcmp(all[i].status,"out")){
            valid[num++]=all[i];
            valid[num++]=all[i+1];
            int intime=all[i+1].time-all[i].time;
            if(parktime.count(all[i].id)==0){
                parktime[all[i].id]=0;
            }
            parktime[all[i].id]+=intime;
            maxtime=max(maxtime,parktime[all[i].id]);
        }
	}

	sort(valid,valid+num,cmpbytime);
    int now=0,numcar=0;
    for(int i=0;i<k;i++){
        scanf("%d:%d:%d",&hh,&mm,&ss);
        int time=timetoint(hh,mm,ss);
        while(now<num&&valid[now].time<=time){
            if(!strcmp(valid[now].status,"in")) numcar++;
            else numcar--;
            now++;
        }
        printf("%d\n",numcar);
    }
    //�������г��ƺ�
    map<string,int>::iterator it
    for(it=parktime.begin();it!=parktime.end();it++){
        if(it->second==maxtime){
            printf("%s ",it->first.c_str());
        }
    }
    printf("%02d:%02d:%02d\n",maxtime/3600,maxtime%3600/60,maxtime%60);
    return 0;
}
