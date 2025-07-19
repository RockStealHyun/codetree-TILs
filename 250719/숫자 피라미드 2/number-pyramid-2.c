#include <stdio.h>

int main() {
    int N;
    int cnt = 0;
    scanf("%d",&N);

    for(int i = 0; i < N; i++) { // 외부 for문

        for(int j = 1; j <= i+1; j++) { // 내부 for문
        cnt = cnt+1;
        
        printf("%d ",cnt);
        }
        printf("\n");
    }
    return 0;
}
