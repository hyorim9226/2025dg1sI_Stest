// n개의 문자가 입력되었을 때, 입력된 n개의 문자를 출력하는 프로그램을 작성해보자.

int main(void){
	int n;
	scanf("%d", &n);
	char t[10000] = {0,};
	scanf("%s", t);
	for(int i = 0; i<n; i++){
		printf("%c", t[i]);
	}
	//printf("%s", t);
	// %s를 이용하면 한번에 입력/출력이 가능
	// 단어 끝에는 문자열의 마지막을 의미하는 널(NULL)문자인 /0가 자동으로 들어감
}