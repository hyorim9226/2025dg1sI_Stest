// 2차원 평면상의 실수 좌표쌍(x, y) 2개가 입력될 때, 두 점의 중점을 출력하는 프로그램을 작성해 보자.(단, 두 점의 중점을 계산해 주는 point f(point p, point q)함수를 사용)
#include <stdio.h>
float hehe(float a, float b){
	float x = (a + b)/2;
	return x;
}
int main(void){
	float x1, x2, y1, y2;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	float n = hehe(x1, x2);
	float m = hehe(y1, y2);
	printf("%.3f %.3f", n, m);
}