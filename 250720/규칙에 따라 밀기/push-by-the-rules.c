#include <stdio.h>
#include <string.h>

int main(void) {
    char A[101];
    char cmd[101];
    scanf("%100s", A);
    scanf("%100s", cmd);

    int len = strlen(A);
    int m   = strlen(cmd);

    for (int i = 0; i < m; i++) {
        if (cmd[i] == 'L') {
            // 왼쪽으로 한 칸 민다: 첫 글자를 맨 뒤로 보낸다
            char first = A[0];
            memmove(A, A + 1, len - 1);
            A[len - 1] = first;
        } else if (cmd[i] == 'R') {
            // 오른쪽으로 한 칸 민다: 마지막 글자를 맨 앞으로 보낸다
            char last = A[len - 1];
            memmove(A + 1, A, len - 1);
            A[0] = last;
        }
    }

    printf("%s\n", A);
    return 0;
}
