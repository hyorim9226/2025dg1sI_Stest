#include <stdio.h>
int main(){
    int n;
    // 변수 입력
    scanf("%d", &n);
    for(int i = 1; i<n+1; i++){
        // 띄어쓰기 입력
        for(int j = 0; j<n-i; j++){
            printf(" ");
        }   
        // 중간 기준 왼쪽 출력
        for(int k = i; k<2*i; k++){
            printf("%d", k);
        }
        // 중간 기준 오른쪽 출력
        for(int l = 2*i-2; l>i-1; l--){
            printf("%d", l);
        }
    // 줄 끝난 후 엔터
    printf("\n");
    }
    // 하단부 출력
    for(int i = n-1; i>0; i--){
        // 띄어쓰기 출력
        for(int j = 0; j<n-i; j++){
            printf(" ");
        }   
        // 왼쪽 출력
        for(int k = i; k<2*i; k++){
            printf("%d", k);
        }
        // 오른쪽 출력
        for(int l = 2*i-2; l>i-1; l--){
            printf("%d", l);
        }
    printf("\n");
    }
    
}