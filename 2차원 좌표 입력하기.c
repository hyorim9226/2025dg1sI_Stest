//n개의 2차원 정수 좌표쌍(xi, yi)을 입력하고, 입력된 좌표쌍을 그대로 출력하는 프로그램을 작성해 보자.
#include <stdio.h>
struct hehe{
	int x;
	int y;
};
int main(void){
	int n;
	scanf("%d", &n);
	struct hehe a[10];
	for(int i = 0; i<n; i++){
		scanf("%d %d", &a[i].x, &a[i].y);
	}

	for(int i = 0; i<n; i++){
		printf("%d %d", a[i].x, a[i].y);
		printf("\n");
	}
}