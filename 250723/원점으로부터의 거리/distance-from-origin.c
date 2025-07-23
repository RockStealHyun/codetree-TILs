#include <stdio.h>
#include <stdlib.h>   // abs()

typedef struct {
    int x, y;
    int idx;   // 입력된 순서 (1부터)
    int d;     // |x| + |y|
} Point;

int main(void){
    int N;
    Point a[1000], t;

    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d %d", &a[i].x, &a[i].y);
        a[i].idx = i + 1;
        a[i].d   = abs(a[i].x) + abs(a[i].y);   // 맨해튼 거리
    }

    // 거리 오름차순, 같으면 idx 오름차순
    for(int i=0;i<N-1;i++)
        for(int j=i+1;j<N;j++)
            if(a[i].d > a[j].d || (a[i].d==a[j].d && a[i].idx > a[j].idx)){
                t = a[i]; a[i] = a[j]; a[j] = t;
            }

    for(int i=0;i<N;i++)
        printf("%d\n", a[i].idx);

    return 0;
}
