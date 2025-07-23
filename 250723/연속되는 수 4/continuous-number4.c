#include <stdio.h>

int main(void){
    int N, x, prev, cur = 1, best = 1;

    scanf("%d", &N);
    scanf("%d", &prev);          // 첫 수

    for(int i = 1; i < N; i++){
        scanf("%d", &x);
        if(x > prev) cur++;      // 증가하면 길이 +1
        else          cur = 1;   // 끊기면 다시 1
        if(cur > best) best = cur;
        prev = x;
    }

    printf("%d\n", best);
    return 0;
}
