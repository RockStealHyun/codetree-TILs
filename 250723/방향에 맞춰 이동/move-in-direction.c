#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int dx[4] = {-1, 0, 0, 1}; // W, S, N, E
    int dy[4] = {0, -1, 1, 0};

    char dir[2];
    int dist, x = 0, y = 0;

    for (int i = 0; i < N; ++i) {
        scanf("%s %d", dir, &dist);
        int d;

        if (dir[0] == 'W') d = 0;
        else if (dir[0] == 'S') d = 1;
        else if (dir[0] == 'N') d = 2;
        else d = 3; // 'E'

        x += dx[d] * dist;
        y += dy[d] * dist;
    }

    printf("%d %d\n", x, y);
    return 0;
}
