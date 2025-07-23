#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char dir;
    int dist;

    // 방향: W S N E -> 0 1 2 3
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, -1, 1, 0};

    int x = 0, y = 0;
    int time = 0;
    int found = 0;

    for (int i = 0; i < N; ++i) {
        scanf(" %c %d", &dir, &dist);
        int d;

        if (dir == 'W') d = 0;
        else if (dir == 'S') d = 1;
        else if (dir == 'N') d = 2;
        else d = 3; // E

        for (int j = 0; j < dist; ++j) {
            x += dx[d];
            y += dy[d];
            time++;

            if (x == 0 && y == 0) {
                printf("%d\n", time);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("-1\n");

    return 0;
}
