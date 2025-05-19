// 두 쌍의 2차원 정수 좌표(x,y)가 입력되었을 때, 두 좌표 사이의 택시 거리를 출력하는 프로그램ㅇ르 작성해 보자.
#include <stdio.h>
struct point{
	int x;
	int y;
};
int main(void){
	int x1, x2, y1, y2;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	struct point n;
	struct point m;
	n.x = x1;
	n.y = y1;
	m.x = x2;
	m.y = y2;
	int k = n.x-m.x;
	int w = n.y-m.y;
	if (k<0){
		k = k*-1;
	}
	if(w<0){
		w = w*-1;
	}
	printf("%d",  k+ w);
}