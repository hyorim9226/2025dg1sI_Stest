//n개의 2차원 좌표쌍이 입력되었을 때, 원점에 가장 가까운 좌표쌍을 출력하는 프로그램을 작성해 보자.
#include <stdio.h>
#include <math.h>
struct hehe{
	int x;
	int y;
};
int main(void){
	int n;
	scanf("%d", &n);
	struct hehe a[n];
	for(int i = 0; i<n; i++){
		scanf("%d %d", &a[i].x, &a[i].y);
	}
	float wow = 10000;
	float k = 0;
	int gi = 0; 
	for(int i = 0; i<n; i++){
		k = sqrt(a[i].x*a[i].x + a[i].y*a[i].y);
		if(k<wow){
			wow = k;
			gi = i;
		}
	}
	printf("%d %d %.3f", a[gi].x, a[gi].y, wow);
}