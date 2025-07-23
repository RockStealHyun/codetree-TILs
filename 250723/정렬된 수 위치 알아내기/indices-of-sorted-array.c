#include <stdio.h>

typedef struct {
    int val;   // 값
    int idx;   // 처음 위치(0~)
} Node;

int main(void){
    int N;
    Node a[1000], t;
    int pos[1000];

    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &a[i].val);
        a[i].idx = i;
    }

    // 값 ↑, 값 같으면 처음 위치 ↑  (stable)
    for(int i=0;i<N-1;i++)
        for(int j=0;j<N-1-i;j++)
            if(a[j].val > a[j+1].val ||
              (a[j].val==a[j+1].val && a[j].idx > a[j+1].idx)){
                t = a[j]; a[j] = a[j+1]; a[j+1] = t;
            }

    // 정렬 후 등수(새 위치) 기록
    for(int i=0;i<N;i++) pos[a[i].idx] = i+1;

    // 처음 순서대로 출력
    for(int i=0;i<N;i++){
        if(i) printf(" ");
        printf("%d", pos[i]);
    }
    return 0;
}
