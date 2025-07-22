#include <stdio.h>

int has_two_diff(char s[]) {          // 서로 다른 글자 2개 이상?
    for (int i = 1; s[i]; i++)
        if (s[i] != s[0]) return 1;   // 첫 글자와 다른 게 나오면 OK
    return 0;
}

int main(void) {
    char A[105];
    scanf("%s", A);
    printf(has_two_diff(A) ? "Yes" : "No");
    return 0;
}
