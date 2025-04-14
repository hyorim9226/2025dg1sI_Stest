//입력받은 단어에 들어있는 문자들 대신, 오른쪽으로 k만큼 회전시킨 문자열 출력
#include <stdio.h>
int main(){
	char t[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char newt[1000];
	scanf("%s", &newt);
	int w = 0;
	for(int k = 0; newt[k] != '\0'; k++){
		w++;
	}
	int n = 0;
	for(int j = 0; j<w; j++){
		for(int i = 0; i<27; i++){
			if (newt[j] == t[i]){
				n = i+4;
				if(n>26){
					n = n-26;
				}
			break;
			}
		}
		printf("%c", t[n]);
	}
}