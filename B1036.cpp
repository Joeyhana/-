#include <cstdio>
int main(){
    //行和列
    int row,col;
    char c;
    scanf("%d %c",&col,&c);
    if(col%2==0) row=col/2;
    else row=col/2+1;
    //第一行
    for(int i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    //第2到row-1行
    for(int i=2;i<row;i++){
        printf("%c",c);
        for(int j=0;j<col-2;j++){
            printf(" ");
        }
        printf("%c\n",c);
    }
    //第row行
    for(int i=0;i<col;i++){
        printf("%c",c);
    }
    return 0;
}
