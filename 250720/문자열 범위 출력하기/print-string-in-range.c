#include <stdio.h>
#include <string.h>

int main(void) {
    char str[101];
    fgets(str, sizeof(str), stdin); // 공백 포함 입력

    // 3번째부터 10번째까지 출력 (index 2~9)
    for (int i = 2; i <= 9; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
