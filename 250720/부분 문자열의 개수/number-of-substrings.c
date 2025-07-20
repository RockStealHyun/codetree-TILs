#include <stdio.h>
#include <string.h>

int main(void) {
    char A[1001], B[1001];
    // A와 B 입력
    scanf("%1000s", A);
    scanf("%1000s", B);

    int lenA = strlen(A);
    int lenB = strlen(B);
    int count = 0;

    // A의 각 위치에서 B와 비교
    for (int i = 0; i <= lenA - lenB; i++) {
        int match = 1;  // 이 위치에서 B가 모두 일치하는가
        for (int j = 0; j < lenB; j++) {
            if (A[i + j] != B[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            count++;
        }
    }

    // 결과 출력
    printf("%d\n", count);
    return 0;
}
