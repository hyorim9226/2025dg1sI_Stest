#include <stdio.h>
#include <math.h>
struct hehe{
	int x;
	int y;
};

int main(void){
	struct hehe a;
	scanf("%d %d", &a.x, &a.y);
	printf("%.3f", sqrt(a.x*a.x + a.y*a.y));
}