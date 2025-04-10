#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int result = 0;
    for(int i = 1; i<n+1; i++){
        if((i%m)!=0){
            result += i;
        }
    }
    printf("%d", result);
}