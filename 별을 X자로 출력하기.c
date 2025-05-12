//정수(n) 1개가 입력되었을 때, 그 개수 높이의 별을 X자로 출력하는 프로그램을 작성해 보자.
//홀수로 출력
int main(void){
	int n;
	scanf("%d", &n);
	char t[101][101];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(i == j){
				t[i][j] = '*';
			}
			else if(i == (n-j-1)){
				t[i][j] = '*';
			}
			else{
				t[i][j] = ' ';
			}
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			printf("%c", t[i][j]);
		}
		printf("\n");
	}
}