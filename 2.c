#include <stdio.h>
// continue이슈 발생! 일단 코드는 999 이상도 가능하게 짰어요
int main(){
    // 변수 정의
    int n; // 입력받는 수
    int check; // 원래 수를 넣는 용
    int wow ; // *이 출력되었는지 확인용
    int num; // 1의 자리를 집어넣을 용
    scanf("%d", &n); // 입력받기
    for(int i = 1; i<n+1; i++){
        wow = 1; // 확인용 변수 정의
        check = i; // 원래 수 집어넣기
        do // 반복을 위해 do-while문 사용
        {
            num = check%10; // 1의 자리를 num에 집어넣음
            check = check/10; // 집어넣고 필요없게 된 1의 자리를 제외한 나머지 수를 check에 넣음
            // 3, 6, 9일때 *을 출력
            if(num == 3){
                printf("* ");
                wow = 0; // 확인변수에 0넣기
                continue;
            }
            else if(num == 6){
                printf("* ");
                wow = 0;
                continue;
            }
            else if(num == 9){
                printf("* ");
                wow = 0;
                continue;
            }
        } while (check != 0); // 마지막자리까지 나눠지면 0이 됨 -> 반복 종료
        if (wow){ // 확인변수 wow가 1인경우(3, 6, 9가 없는경우)
            printf("%d ", i); // 원래 수 출력
        }
    }// 반복
    
}