#include <cstdio>
//一Galleon=17*29个Knut
const int Galleon=17*29;
//Sickle=29个Knut
const int Sickle=29;
int main(){
    int a1,b1,c1;
    int a2,b2,c2;
    scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);
    int price=a1*Galleon+b1*Sickle+c1;
    int money=a2*Galleon+b2*Sickle+c2;
    int change=money-price;
    if(change<0){
        printf("-");
        change=-change;
    }
    //转换成原来的格式
    printf("%d.%d.%d\n",change/Galleon,change%Galleon/Sickle,change%Sickle);
    return 0;
}
