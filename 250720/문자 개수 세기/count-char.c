#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];     // 문자열 입력
    char ch;           // 알파벳 한 글자
    int count = 0;

    // 문자열 입력 (공백 포함)
    fgets(str, sizeof(str), stdin);

    // 알파벳 하나 입력 (공백 포함 안 되므로 scanf 가능)
    scanf(" %c", &ch);  // 앞에 공백 넣는 이유: 버퍼에 남은 '\n' 제거

    // 문자열 길이만큼 순회하며 ch와 같은 글자 세기
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
