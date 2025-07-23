#include <stdio.h>

int main(void){
    int N, K;
    int a[101] = {0};
    scanf("%d %d", &N, &K);

    while (K--){
        int L, R;
        scanf("%d %d", &L, &R);
        for(int i=L; i<=R; i++) a[i]++;   // 해당 구간 블록 +1
        }

    int mx = 0;
    for(int i=1; i<=N; i++)
        if(a[i] > mx) mx = a[i];

    printf("%d\n", mx);
    return 0;
}
