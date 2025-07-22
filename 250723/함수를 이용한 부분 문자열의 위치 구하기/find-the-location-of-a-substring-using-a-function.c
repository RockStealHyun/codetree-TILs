#include <stdio.h>
#include <string.h>

int find_idx(char s[], char t[]) {   // t가 s에 있으면 시작 인덱스, 없으면 -1
    int n = strlen(s), m = strlen(t);
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && s[i + j] == t[j]) j++;
        if (j == m) return i;
    }
    return -1;
}

int main(void) {
    char S[1001], T[1001];
    scanf("%s", S);
    scanf("%s", T);
    printf("%d", find_idx(S, T));
    return 0;
}
