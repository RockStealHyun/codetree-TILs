#include <stdio.h>

int main() {
    int N, M;
    int map[105][105] = {0};  // 색칠 여부 저장
    scanf("%d %d", &N, &M);

    int dx[4] = {-1, 1, 0, 0};  // 상, 하, 좌, 우
    int dy[4] = {0, 0, -1, 1};

    for (int i = 0; i < M; ++i) {
        int r, c;
        scanf("%d %d", &r, &c);

        map[r][c] = 1;  // 색칠

        int count = 0;
        for (int d = 0; d < 4; ++d) {
            int nr = r + dx[d];
            int nc = c + dy[d];

            if (nr >= 1 && nr <= N && nc >= 1 && nc <= N) {
                if (map[nr][nc] == 1) count++;
            }
        }

        if (count == 3)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}
