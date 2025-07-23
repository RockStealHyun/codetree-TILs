#include <stdio.h>

int main(void){
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);

    int cnt[101] = {0};   // N ≤ 100
    for(int i = 0; i < M; i++){
        int s;
        scanf("%d", &s);
        cnt[s]++;
        if(cnt[s] >= K){
            printf("%d\n", s);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
