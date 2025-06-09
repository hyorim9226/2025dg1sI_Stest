#include <stdio.h>
int G[4][4];
int main(void){
	int v1, v2, w;
	for(int i = 0; i<6; i++){
		scanf("%d %d %d", &v1, &v2, &w);
		G[v1-1][v2-1] = w;
	}
	for(int i = 0; i<4; i++){
		for(int j = 0; j<4; j++){
			printf("%d ", G[i][j]);
			
		}
		printf("\n");
	}
	
}