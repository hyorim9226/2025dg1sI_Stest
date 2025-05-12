//정수 n이 입력되었을 때, n개의 별('*')을 출력하는 프로그램을 작성해 보자
#include <stdio.h>

void f(int n){
	for(int i = 0; i<n; i++){
		printf("*");
	}	
}

int main(void){
	int n; 
	scanf("%d", &n);
	f(n);
}