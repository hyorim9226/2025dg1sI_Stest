// 문자가 최대 10000개인 1개의 단어가 입력되었을 때, 입력된 단어의 문자 개수를 출력하는 프로그램을 작성해보자.
#include <stdio.h>
int main(void){
	char t[10000];
	int k = 0;
	scanf("%s", t);
	for(int i = 0; t[i]!='\0';i++){
		k++;
	}
	printf("%s %d", t, k);
}