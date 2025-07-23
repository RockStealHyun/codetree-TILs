#include <stdio.h>

typedef struct {
    int l, r;
} Seg;

int main(void){
    int N;
    Seg s[100];
    scanf("%d", &N);
    for(int i=0;i<N;i++) scanf("%d %d", &s[i].l, &s[i].r);

    int ans = 0;
    // 좌표 범위가 -100~100 이므로 반정수 지점만 검사하면 충분
    for(int x=-100; x<100; x++){
        double p = x + 0.5;   // 끝점은 제외해야 하므로 중간 지점 선택
        int cnt = 0;
        for(int i=0;i<N;i++)
            if(s[i].l < p && p < s[i].r) cnt++;
        if(cnt > ans) ans = cnt;
    }

    printf("%d\n", ans);
    return 0;
}
