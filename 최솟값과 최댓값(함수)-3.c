#include <stdio.h>
#define N 4
void wow(int t[]){
	int max = -2147483647;
	for(int i = 0; i<N; i++){
		if(max < t[i]){
			max = t[i];
		}
	}
	printf("%d", max);
}
void hehe(int t[]){
	int min = 2147483647;
	for(int i = 0; i<N; i++){
		if(min > t[i]){
			min = t[i];
		}
	}
	printf("%d", min);
}
int main(void){
	int k;
	int t[N];
	for(int i = 0; i<N; i++){
		scanf("%d", &k);
		t[i] = k;
	}
	hehe(t);
	printf("\n");
	wow(t);
}