//정수 n이 입력되었을 때, 정수 123을 n번 더한 결과를 출력하는 프로그램을 작성해 보자.
void wow(int n){
	printf("%d", n*123);
}
#include <stdio.h>
int main(void){
	int n;
	scanf("%d", &n);
	wow(n);
}