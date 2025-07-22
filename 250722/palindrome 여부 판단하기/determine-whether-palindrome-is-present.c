#include <stdio.h>
#include <string.h>

int is_pal(char s[]) {          // 팰린드롬이면 1, 아니면 0
    int l = 0, r = (int)strlen(s) - 1;
    while (l < r) {
        if (s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main(void) {
    char A[105];
    scanf("%s", A);
    printf(is_pal(A) ? "Yes" : "No");
    return 0;
}
