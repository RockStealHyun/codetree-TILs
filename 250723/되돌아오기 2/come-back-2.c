#include <stdio.h>
#include <string.h>

int main() {
    char cmd[100005];
    scanf("%s", cmd);

    // 북(0), 동(1), 남(2), 서(3)
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x = 0, y = 0, dir = 0;
    int len = strlen(cmd);

    for (int t = 0; t < len; ++t) {
        if (cmd[t] == 'L') {
            dir = (dir + 3) % 4;
        } else if (cmd[t] == 'R') {
            dir = (dir + 1) % 4;
        } else if (cmd[t] == 'F') {
            x += dx[dir];
            y += dy[dir];
        }

        if (x == 0 && y == 0) {
            printf("%d\n", t + 1);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
