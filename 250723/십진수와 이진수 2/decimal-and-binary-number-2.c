#include <stdio.h>
#include <string.h>

int main(void){
    char s[11];          // 이진수 문자열(최대 10자리)
    scanf("%s", s);

    int dec = 0;
    for (int i = 0; s[i]; i++)
        dec = dec * 2 + (s[i] - '0');   // 2진수 → 10진수

    dec *= 17;                          // 17배

    if (dec == 0){                      // 결과가 0인 경우
        puts("0");
        return 0;
    }

    int bit[32], idx = 0;
    while (dec > 0){
        bit[idx++] = dec % 2;
        dec /= 2;
    }
    for (int i = idx - 1; i >= 0; i--)
        printf("%d", bit[i]);
    printf("\n");
    return 0;
}
