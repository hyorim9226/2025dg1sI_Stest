// n*m개의 정수가 입력되었을 때, 2차원 누적합을 출력하는 프로그램을 작성해 보자.
#include <stdio.h>
int main(void){
	int n, m;
	scanf("%d %d", &n, &m);
	int t[n][m];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			scanf("%d", &t[i][j]);
		}
	}
	int newn= 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			newn = 0;
			for(int x = 0; x<i+1; x++){
				for(int y = 0; y<j+1; y++){
					newn += t[x][y];
				}
			}
			printf("%d ", newn);
		}
		printf("\n");
	}
}