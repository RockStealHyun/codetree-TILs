#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101];
    // 문자열 입력
    scanf("%100s", s);

    int len = strlen(s);
    char first  = s[0];  // 첫 번째 문자
    char second = s[1];  // 두 번째 문자

    // 문자열 순회하며 변환
    for (int i = 0; i < len; i++) {
        if (s[i] == second) {
            putchar(first);
        } else {
            putchar(s[i]);
        }
    }
    putchar('\n');
    return 0;
}
