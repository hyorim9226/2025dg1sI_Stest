#include <stdio.h>
#define N 4
int wow(int t[]){
	if((t[0]<t[1]) && (t[0]<t[2]) && (t[0]<t[3])){
		printf("%d", t[0]);
	}
	else if((t[1]<t[0]) && (t[1]<t[2]) && (t[1]<t[3])){
		printf("%d", t[1]);
	}
	else if((t[2]<t[0]) && (t[2]<t[1]) && (t[2]<t[3])){
		printf("%d", t[2]);
	}
	else if((t[3]<t[0]) && (t[3]<t[1]) && (t[3]<t[2])){
		printf("%d", t[3]);
	}
}
int hehe(int t[]){
if((t[0]>t[1]) && (t[0]>t[2]) && (t[0]>t[3])){
		printf("%d", t[0]);
	}
	else if((t[1]>t[0]) && (t[1]>t[2]) && (t[1]>t[3])){
		printf("%d", t[1]);
	}
	else if((t[2]>t[0]) && (t[2]>t[1]) && (t[2]>t[3])){
		printf("%d", t[2]);
	}
	else if((t[3]>t[0]) && (t[3]>t[1]) && (t[3]>t[2])){
		printf("%d", t[3]);
	}
}
int main(void){
	int k;
	int t[N];
	for(int i = 0; i<N; i++){
		scanf("%d", &k);
		t[i] = k;
	}
	wow(t);
	printf("\n");
	hehe(t);
}