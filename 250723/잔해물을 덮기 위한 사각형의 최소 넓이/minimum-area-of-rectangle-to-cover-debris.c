#include <stdio.h>

int main(void){
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;
    scanf("%d %d %d %d", &ax1, &ay1, &ax2, &ay2);
    scanf("%d %d %d %d", &bx1, &by1, &bx2, &by2);

    // 교집합(I) 계산
    int ix1 = ax1 > bx1 ? ax1 : bx1;
    int iy1 = ay1 > by1 ? ay1 : by1;
    int ix2 = ax2 < bx2 ? ax2 : bx2;
    int iy2 = ay2 < by2 ? ay2 : by2;

    // 남은 조각들의 최소/최대 좌표
    int minX = 1e9, minY = 1e9, maxX = -1e9, maxY = -1e9;
    int exist = 0;

    // 교집합이 없으면 전체가 남음
    if (ix1 >= ix2 || iy1 >= iy2) {
        printf("%d\n", (ax2 - ax1) * (ay2 - ay1));
        return 0;
    }

    // 4개 가능 조각 각각 체크
    // 1) 왼쪽 조각
    if (ax1 < ix1) {
        int x1 = ax1, x2 = ix1, y1 = ay1, y2 = ay2;
        if (x2 > x1 && y2 > y1) {
            if (x1 < minX) minX = x1;
            if (y1 < minY) minY = y1;
            if (x2 > maxX) maxX = x2;
            if (y2 > maxY) maxY = y2;
            exist = 1;
        }
    }
    // 2) 오른쪽 조각
    if (ix2 < ax2) {
        int x1 = ix2, x2 = ax2, y1 = ay1, y2 = ay2;
        if (x2 > x1 && y2 > y1) {
            if (x1 < minX) minX = x1;
            if (y1 < minY) minY = y1;
            if (x2 > maxX) maxX = x2;
            if (y2 > maxY) maxY = y2;
            exist = 1;
        }
    }
    // 3) 아래쪽 조각
    if (ay1 < iy1) {
        int x1 = ix1, x2 = ix2, y1 = ay1, y2 = iy1;
        if (x2 > x1 && y2 > y1) {
            if (x1 < minX) minX = x1;
            if (y1 < minY) minY = y1;
            if (x2 > maxX) maxX = x2;
            if (y2 > maxY) maxY = y2;
            exist = 1;
        }
    }
    // 4) 위쪽 조각
    if (iy2 < ay2) {
        int x1 = ix1, x2 = ix2, y1 = iy2, y2 = ay2;
        if (x2 > x1 && y2 > y1) {
            if (x1 < minX) minX = x1;
            if (y1 < minY) minY = y1;
            if (x2 > maxX) maxX = x2;
            if (y2 > maxY) maxY = y2;
            exist = 1;
        }
    }

    if (!exist) printf("0\n");
    else        printf("%d\n", (maxX - minX) * (maxY - minY));

    return 0;
}
