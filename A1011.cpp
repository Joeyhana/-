#include <cstdio>
char S[3] = {'W', 'T', 'L'};
int main(){
    double result = 1.0, temp, a;
	int max;
	for(int i = 0; i < 3; i++){
		temp = 0.0;
		for(int j = 0; j < 3; j++){
			scanf("%lf", &a);
			if(a > temp){
				temp = a;
				max = j;
			}
		}
		result *= temp;
		printf("%c ", S[max]);
	}
	printf("%.2f", (result * 0.65 - 1 ) * 2);
	return 0;
}
