#include <stdio.h>

int main(void) {
    char s[105];
    int cnt[26] = {0};

    scanf("%s", s);
    for (int i = 0; s[i]; i++)          // 빈도 세기
        cnt[s[i] - 'a']++;

    for (int i = 0; i < 26; i++)         // 오름차순 출력
        while (cnt[i]--) putchar('a' + i);

    return 0;
}
