#include <stdio.h>

int main(void){
    int N;
    int x1, y1, x2, y2;
    int board[201][201] = {0};   // 좌표 -100~100 → +100 해서 0~200 사용
    int area = 0;

    scanf("%d", &N);
    for(int k = 0; k < N; k++){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for(int x = x1; x < x2; x++)
            for(int y = y1; y < y2; y++)
                board[x + 100][y + 100] = 1;   // 이 1x1 칸은 덮였다
    }

    for(int i = 0; i <= 200; i++)
        for(int j = 0; j <= 200; j++)
            area += board[i][j];

    printf("%d\n", area);
    return 0;
}
