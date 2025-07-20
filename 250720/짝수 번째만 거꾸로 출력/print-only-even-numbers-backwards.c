#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101];
    // 문자열 입력
    scanf("%100s", s);

    int n = strlen(s);

    // 짝수 번째 문자들만 모을 배열
    char tmp[101];
    int t = 0;

    // i는 0부터 시작하므로, 짝수 번째 문자는 i=1,3,5,...
    for (int i = 1; i < n; i += 2) {
        tmp[t++] = s[i];
    }

    // 모은 문자들을 역순으로 출력
    for (int i = t - 1; i >= 0; i--) {
        putchar(tmp[i]);
    }
    putchar('\n');

    return 0;
}
