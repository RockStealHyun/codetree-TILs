#include <stdio.h>

typedef struct {
    char code[11];   // 해제 코드 (최대 10글자 + '\0')
    char color;      // R, G, B 중 하나
    int  second;     // 특정 초
} Info;

int main(void) {
    Info info;

    scanf("%s %c %d", info.code, &info.color, &info.second);

    printf("code : %s\n", info.code);
    printf("color : %c\n", info.color);
    printf("second : %d\n", info.second);

    return 0;
}
