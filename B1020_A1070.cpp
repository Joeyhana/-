#include <cstdio>
#include <algorithm>

struct mooncake{
    double store;
    double seil;
    double price;
}cake[1001];

bool cmp(mooncake a,mooncake b){
    return a.price>b.price;
}

int main(){
    int n;
    double D;
    scanf("%d %lf",&n,&D);
    for(int i=0;i<n;i++){
        scanf("%lf",&cake[i].store);
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&cake[i].seil);
        cake[i].price=cake[i].seil/cake[i].store;
    }
    sort(cake,cake+n,cmp);
    double income;
    for(int i=0;i<n;i++){
        if(cake[i].store<=D){
            D-=cake[i].store;
            income+=cake[i].seil;
        }else{
            income+=cake[i].price*D;
            break;
        }
    }

    printf("%.2f\n",income);
    return 0;
}
