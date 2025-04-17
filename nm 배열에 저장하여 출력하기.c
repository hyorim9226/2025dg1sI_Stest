// n*m크기의 2차원 배열에 k개의 정수를 원하는 좌표에 입력한 후 출력하는 프로그램을 작성해보자.
#include <stdio.h>
int main(void){
	int n, m;
	scanf("%d %d", &n, &m);
	int k;
	scanf("%d", &k);
	int t[n][m];
	for(int i = 0; i<n; i++){
		for(int j= 0; j<m; j++){
			t[i][j] = 0;
		}
	}
	int x, y;
	for(int i = 0; i < k; i++){
		scanf("%d %d", &x, &y);
		scanf("%d", &t[x][y]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j< m; j++){
			printf("%d ", t[i][j]);
		}
		printf("\n");
	}
}