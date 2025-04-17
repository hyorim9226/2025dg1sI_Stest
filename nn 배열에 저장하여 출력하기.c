// n*n개의 정수(int)가 입력되었을 때, n개씩 줄을 바꿔 출력하는 프로그램을 작성해 보자.
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int t[n][n];
	for(int i = 0; i<n; i++){
		for(int j =0; j<n; j++){
			scanf("%d", &t[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
}