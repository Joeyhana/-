#include <cstdio>
#include <cstring>
#include <iostream>
 using namespace std;

char str[100010];
bool HashTable[256];

int main(){
    memset(HashTable,true,sizeof(HashTable));

    fgets(str,100010,stdin);
    int len=strlen(str);

    for(int i=0;i<len;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
        HashTable[str[i]]=false;
    }

    fgets(str,100010,stdin);
    len=strlen(str);

    for(int i=0;i<len;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            int low=str[i]+32;
            if(HashTable[low]==true&&HashTable['+']==true){
                printf("%c",str[i]);
            }
        }else if(HashTable[str[i]]==true){
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}

