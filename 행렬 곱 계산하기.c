// n개의 2*2 행렬이 입력되었을 때, n개의 행렬을 모두 곱한 결과를 출력하는 프로그램을 작성해 보자.
#include <stdio.h>

struct hehe{
	int a1;
	int a2;
	int a3;
	int a4;
};

int main(void){
	int n;
	scanf("%d", &n);
	struct hehe k[n];
	for(int i = 0; i<n; i++){
		scanf("%d %d %d %d", &k[i].a1, &k[i].a2, &k[i].a3, &k[i].a4);
	}
	struct hehe res;
	res.a1 = k[0].a1;
	res.a2 = k[0].a2;
	res.a3 = k[0].a3;
	res.a4 = k[0].a4;
	int b1;
	int b2;
	int b3;
	int b4;
	for(int i = 1; i<n; i++){
		b1 = res.a1*k[i].a1 + res.a2*k[i].a3;
		b2 = res.a1*k[i].a2 + res.a2*k[i].a4;
		b3 = res.a3*k[i].a1 + res.a4*k[i].a3;
		b4 = res.a3*k[i].a2 + res.a4*k[i].a4;
		res.a1 = b1;
		res.a2 = b2;
		res.a3 = b3;
		res.a4 = b4;
	}
	printf("%d %d\n", res.a1, res.a2);
	printf("%d %d", res.a3, res.a4);
}