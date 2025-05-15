#include <stdio.h>
void hehe(int n, int m){
	if (n>m){
		printf("%d", n-m);
	}
	else{
		printf("%d", m-n);
	}
}
int main(void){
	int n, m;
	scanf("%d %d", &n, &m);
	hehe(n, m);
}