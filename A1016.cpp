#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

const int N=1010;
int toll[25];

struct Record{
    char name[25];
    int month,day,hour,minute;
    bool status;//trueÎªon-line falseÎªoff-line
}rec[N],temp;

bool cmp(Record a,Record b){
    int s =strcmp(a.name,b.name);
    if(s!=0) return s<0;
    else if(a.month!=b.month) return a.month<b.month;
    else if(a.day!=b.day) return a.day<b.day;
    else if(a.hour!=b.hour) return a.hour<b.hour;
    else return a.minute<b.minute;
}

void get_ans(int on,int off,int& time,int& money){
    temp=rec[on];
    while(temp.day<rec[off].day||temp.hour<rec[off].hour||temp.minute<rec[off].minute){
        time++;
        money += toll[temp.hour];
        temp.minute++;
        if(temp.minute>=60){
            temp.minute=0;
            temp.hour++;
        }
        if(temp.hour>=24){
            temp.hour=0;
            temp.day++;
        }
    }
}

int main(){
    for(int i=0;i<24;i++){
        scanf("%d",&toll[i]);
    }
    int n;
    scanf("%d",&n);
    char line[10];
    for(int i=0;i<n;i++){
        scanf("%s",rec[i].name);
        scanf("%d:%d:%d:%d",&rec[i].month,&rec[i].day,&rec[i].hour,&rec[i].minute);
        scanf("%s",line);

        if(strcmp(line,"on-line")==0){
            rec[i].status=true;
        }else{
            rec[i].status=false;
        }
    }

    //ÅÅÐò
    sort(rec,rec+n,cmp);
    int on=0,off,next;
    while(on<n){
        int print=0;
        next=on;
        while(next<n&&strcmp(rec[next].name,rec[on].name)==0){
            if(print==0&&rec[next].status==true){
                print=1;
            }else if(print==1&&rec[next].status==false){
                print=2;
            }
            next++;
        }
        if(print<2){
            on=next;
            continue;
        }
        int amount=0;
        printf("%s %02d\n",rec[on].name,rec[on].month);
        while(on<next){
            while(on<next-1&&!(rec[on].status==true&&rec[on+1].status==false)){
                on++;
            }
            off=on+1;
            if(off==next){
                on=next;
                break;
            }
            printf("%02d:%02d:%02d ",rec[on].day,rec[on].hour,rec[on].minute);
            printf("%02d:%02d:%02d ",rec[off].day,rec[off].hour,rec[off].minute);
            int time=0,money=0;
            get_ans(on,off,time,money);
            amount+=money;
            printf("%d $%.2f\n",time,money/100.0);
            on=off+1;
        }
        printf("Total amount: $%.2f\n",amount/100.0);
    }
    return 0;
}





















