#include <cstdio>
int main(){
    //�к���
    int row,col;
    char c;
    scanf("%d %c",&col,&c);
    if(col%2==0) row=col/2;
    else row=col/2+1;
    //��һ��
    for(int i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    //��2��row-1��
    for(int i=2;i<row;i++){
        printf("%c",c);
        for(int j=0;j<col-2;j++){
            printf(" ");
        }
        printf("%c\n",c);
    }
    //��row��
    for(int i=0;i<col;i++){
        printf("%c",c);
    }
    return 0;
}
