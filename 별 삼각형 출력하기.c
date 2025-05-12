// 정수(n) 1개가 입력되었을 때, 그 개수 높이의 별 삼각형을 출력하는 프로그램을 작성해 보자.
#include <stdio.h>
int main(void){
	int n;
	scanf("%d", &n);
	char t[101][101] = {'\0'};
	for(int i = 0; i<n; i++){
		for(int j = 0; j<i+1; j++){
			t[i][j] = '*';	
		}
	}	
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("%c", t[i][j]);	
		}
		printf("\n");
	}
}