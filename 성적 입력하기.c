//2개의 학번(num), 이름(name), 점수(scroe)을 입력받아, 높은 점수의 학번, 이름, 점수를 출력하는 프로그램을 작성해 보자.
#include <stdio.h>
struct std{
	int num;
	char name[100];
	int score;
};
int main(void){
	struct std s1;
	struct std s2;
	scanf("%d %s %d", &s1.num, &s1.name, &s1.score);
	scanf("%d %s %d", &s2.num, &s2.name, &s2.score);
	if (s1.score < s2.score){
		printf("%d %s %d", s2.num, s2.name, s2.score);
		
	}
	if (s2.score < s1.score){
		
		printf("%d %s %d", s1.num, s1.name, s1.score);
	}
	else if(s1.score == s2.score){
		printf("%d %s %d", s1.num, s1.name, s1.score);
		printf("\n");
		printf("%d %s %d", s2.num, s2.name, s2.score);
	}
}