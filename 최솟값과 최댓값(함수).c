//4개의 정수(a, b, c, d)가 입력될 때, 최솟값과 최댓값을 출력하는 프로그램을 작성해 보자. (단, 최솟값 함수 f()와 최댓값 함수 g()를 사용)
#include <stdio.h>
void hehe(int a, int b, int c, int d){
	if((a>b) && (a>c) && (a>d)){
		printf("%d", a);
	}
	else if((b>a) && (b>c) && (b>d)){
		printf("%d", b);
	}
	else if((c>a) && (c>b) && (c>d)){
		printf("%d", c);
	}
	else if((d>a) && (d>b) && (d>c)){
		printf("%d", d);
	}
}
void wow(int a, int b, int c, int d){
	if((a<b) && (a<c) && (a<d)){
		printf("%d", a);
	}
	else if((b<a) && (b<c) && (b<d)){
		printf("%d", b);
	}
	else if((c<a) && (c<b) && (c<d)){
		printf("%d", c);
	}
	else if((d<a) && (d<b) && (d<c)){
		printf("%d", d);
	}
}
int main(void){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	wow(a, b, c, d);
	printf("\n");
	hehe(a, b, c, d);
}