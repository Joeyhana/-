#include <cstdio>

struct stu{//M放男生最低分 F放女生最高分数
    char name[15];
    char id[15];
    int score;
}temp,M,F;

void init(){
    M.score=101;
    F.score=-1;
}

int main(){
    init();
	int n;
	char sex;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%s %c %s %d",temp.name,&sex,temp.id,&temp.score);
		if(sex=='M'&&temp.score<M.score){
            M=temp;
		}else if(sex=='F'&&temp.score>F.score){
		    F=temp;
        }
	}
	if(F.score==-1) printf("Absent\n");
	else printf("%s %s\n",F.name,F.id);

	if(M.score==101) printf("Absent\n");
	else printf("%s %s\n",M.name,M.id);

	if(F.score==-1||M.score==101) printf("NA\n");
	else printf("%d\n",F.score-M.score);

	return 0;
}
