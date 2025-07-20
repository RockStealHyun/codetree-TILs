#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 정의합니다.
    char str[21];
    char a;

    // 문자열을 입력받습니다.
    scanf("%s", str);

    // 문자를 입력받습니다.
    scanf(" %c", &a);

    int start_idx = -1;

    // 문자열 a가 존재하는지 확인하고 존재할 경우 그 인덱스를 기록합니다.
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == a) {
            start_idx = i;
            break;
        }
    }

    // 문자열 a가 존재하지 않는다면 No를 출력합니다.
    if(start_idx == -1)
        printf("No");
    else
        printf("%d", start_idx);

    return 0;
}
