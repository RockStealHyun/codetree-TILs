#include <stdio.h>
#include <string.h>

int is_anagram(char a[], char b[]) {   // 순서 바꿔 같게 만들 수 있나?
    if (strlen(a) != strlen(b)) return 0;

    int cnt[128] = {0};                // ASCII 범위만큼

    for (int i = 0; a[i]; i++) cnt[(unsigned char)a[i]]++;
    for (int i = 0; b[i]; i++) cnt[(unsigned char)b[i]]--;

    for (int i = 0; i < 128; i++)
        if (cnt[i] != 0) return 0;
    return 1;
}

int main(void) {
    char s1[100001], s2[100001];
    scanf("%s", s1);
    scanf("%s", s2);

    printf(is_anagram(s1, s2) ? "Yes" : "No");
    return 0;
}
