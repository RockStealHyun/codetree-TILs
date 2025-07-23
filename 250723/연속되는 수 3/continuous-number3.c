#include <stdio.h>

int main(void){
    int N, x;
    int prevSign = 0;   // 1: 양수, -1: 음수
    int cur = 0, best = 0;

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &x);            // 0은 주어지지 않음
        int s = (x > 0) ? 1 : -1;   // 부호만 취함

        if(i == 0 || s != prevSign){   // 처음이거나 부호가 바뀌면 새 구간 시작
            cur = 1;
            prevSign = s;
        }else{
            cur++;
        }

        if(cur > best) best = cur;
    }

    printf("%d\n", best);
    return 0;
}
