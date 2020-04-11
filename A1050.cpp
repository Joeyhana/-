#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
bool hashtable[128];

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int len1=a.length();
    int len2=b.length();

    for(int k=0;k<len2;k++){
       hashtable[b[k]]=true;
    }
    for(int k=0;k<len1;k++){
        if(hashtable[a[k]]==false){
            printf("%c",a[k]);
        }
    }
    return 0;
}
