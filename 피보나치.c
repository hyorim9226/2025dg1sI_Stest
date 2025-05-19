//n번째 피보나치 수를 계산해 주는 재귀 함수를 설계해 보자.
#include <stdio.h>
int fibo(int n){
	if(n == 1){
		return 1;
	}
	else if(n == 2){
		return 1;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(void){
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
}