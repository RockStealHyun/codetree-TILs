#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[101], str2[101];

    // 공백 포함 입력 받기
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // 첫 번째 줄에서 공백 제외하고 출력
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] != ' ' && str1[i] != '\n') {
            printf("%c", str1[i]);
        }
    }

    // 두 번째 줄에서도 공백 제외하고 출력
    for (int i = 0; i < strlen(str2); i++) {
        if (str2[i] != ' ' && str2[i] != '\n') {
            printf("%c", str2[i]);
        }
    }

    return 0;
}
