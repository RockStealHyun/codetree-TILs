#include <stdio.h>
#include <string.h>

int main(void) {
    char A[101], B[101];
    // 문자열 A, B 입력
    scanf("%100s", A);
    scanf("%100s", B);

    // A+B 와 B+A 를 저장할 버퍼
    char AB[202], BA[202];

    // AB = A + B
    strcpy(AB, A);
    strcat(AB, B);

    // BA = B + A
    strcpy(BA, B);
    strcat(BA, A);

    // 비교 후 출력
    if (strcmp(AB, BA) == 0) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}
