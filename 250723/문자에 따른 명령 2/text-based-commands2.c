#include <stdio.h>
#include <string.h>

int main() {
    char cmd[100005];
    scanf("%s", cmd);

    // 북(0), 동(1), 남(2), 서(3)
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x = 0, y = 0;
    int dir = 0; // 처음에는 북쪽

    int len = strlen(cmd);
    for (int i = 0; i < len; ++i) {
        if (cmd[i] == 'L') {
            dir = (dir + 3) % 4; // 왼쪽 회전
        } else if (cmd[i] == 'R') {
            dir = (dir + 1) % 4; // 오른쪽 회전
        } else if (cmd[i] == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
    }

    printf("%d %d\n", x, y);
    return 0;
}
