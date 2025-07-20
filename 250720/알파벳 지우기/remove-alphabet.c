#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s1[9], s2[9];
    // 두 문자열 입력 (길이 최대 8)
    scanf("%8s", s1);
    scanf("%8s", s2);

    // 숫자를 이어붙여 만들 수를 저장할 변수
    int num1 = 0, num2 = 0;

    // 첫 번째 문자열에서 숫자만 꺼내 num1 계산
    for (int i = 0; s1[i] != '\0'; i++) {
        if (isdigit(s1[i])) {
            // 이전에 만든 num1에 자릿수를 하나 올리고 새 숫자를 더함
            num1 = num1 * 10 + (s1[i] - '0');
        }
    }

    // 두 번째 문자열에서 숫자만 꺼내 num2 계산
    for (int i = 0; s2[i] != '\0'; i++) {
        if (isdigit(s2[i])) {
            num2 = num2 * 10 + (s2[i] - '0');
        }
    }

    // 두 수의 합을 출력
    printf("%d\n", num1 + num2);
    return 0;
}
