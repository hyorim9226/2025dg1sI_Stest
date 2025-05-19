//정수 n이 입력 되었을 때, 1부터 n까지의 정수 합을 출력하는 프로그램을 작성해 보자.
#include <stdio.h>
int wow(int n){
	if(n == 1){
		return 1;
	}
	else{
		return n + wow(n-1);
	}
}
int main(void){
	int n;
	scanf("%d", &n);
	printf("%d", wow(n));
}