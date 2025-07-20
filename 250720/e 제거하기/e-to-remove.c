#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101];
    scanf("%100s", s);

    int n = strlen(s);
    // 첫 번째 'e' 위치 찾기
    int pos = 0;
    while (pos < n && s[pos] != 'e') {
        pos++;
    }
    // pos는 반드시 'e'를 가리킨다.

    // 제거한 뒤 출력
    for (int i = 0; i < n; i++) {
        if (i == pos) continue;
        putchar(s[i]);
    }
    putchar('\n');
    return 0;
}
