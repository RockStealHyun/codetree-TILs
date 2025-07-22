#include <stdio.h>

typedef struct {
    char code[11];   // 비밀코드 (최대 10글자 + '\0')
    char place;      // 접선 장소(대문자 한 글자)
    int  time;       // 시간
} Info;

int main(void) {
    Info info;

    scanf("%s %c %d", info.code, &info.place, &info.time);

    printf("secret code : %s\n", info.code);
    printf("meeting point : %c\n", info.place);
    printf("time : %d", info.time);

    return 0;
}
