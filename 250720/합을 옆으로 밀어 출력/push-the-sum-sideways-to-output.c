#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    // 합을 문자열로
    char s[20];
    sprintf(s, "%d", sum);

    int len = strlen(s);
    // 한 글자만 있을 때는 그대로
    if (len == 1) {
        printf("%s\n", s);
    } else {
        // 두 번째 문자부터 끝까지 출력하고, 
        // 맨 뒤에 첫 문자를 붙인다
        for (int i = 1; i < len; i++) {
            putchar(s[i]);
        }
        putchar(s[0]);
        putchar('\n');
    }

    return 0;
}
