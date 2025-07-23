#include <stdio.h>

typedef struct {
    int x1, y1, x2, y2;
} Rect;

int overlap(Rect a, Rect b) {
    int w = (a.x2 < b.x2 ? a.x2 : b.x2) - (a.x1 > b.x1 ? a.x1 : b.x1);
    int h = (a.y2 < b.y2 ? a.y2 : b.y2) - (a.y1 > b.y1 ? a.y1 : b.y1);
    if (w < 0) w = 0;
    if (h < 0) h = 0;
    return w * h;
}

int area(Rect r) {
    return (r.x2 - r.x1) * (r.y2 - r.y1);
}

int main(void) {
    Rect A, B, M;
    scanf("%d %d %d %d", &A.x1, &A.y1, &A.x2, &A.y2);
    scanf("%d %d %d %d", &B.x1, &B.y1, &B.x2, &B.y2);
    scanf("%d %d %d %d", &M.x1, &M.y1, &M.x2, &M.y2);

    int remain = area(A) - overlap(A, M)
               + area(B) - overlap(B, M);

    printf("%d\n", remain);
    return 0;
}
