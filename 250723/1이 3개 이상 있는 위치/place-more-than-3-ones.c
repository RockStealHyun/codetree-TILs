#include <stdio.h>

int main() {
    int N;
    int map[100][100];
    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            scanf("%d", &map[i][j]);

    // 8방향: 상, 하, 좌, 우, 좌상, 좌하, 우상, 우하
    int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dy[8] = {0, 0, -1, 1, -1, 1, -1, 1};

    int count = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int ones = 0;

            for (int d = 0; d < 8; ++d) {
                int nx = i + dx[d];
                int ny = j + dy[d];

                if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                    if (map[nx][ny] == 1) ones++;
                }
            }

            if (ones >= 3) count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
