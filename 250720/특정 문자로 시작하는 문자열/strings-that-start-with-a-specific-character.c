#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char strs[20][21];  // 최대 20개, 각 길이 최대 20
    for (int i = 0; i < N; i++) {
        scanf("%s", strs[i]);
    }

    char target;
    scanf(" %c", &target);  // 찾을 알파벳

    int count = 0;
    int sum_len = 0;
    for (int i = 0; i < N; i++) {
        if (strs[i][0] == target) {
            count++;
            sum_len += strlen(strs[i]);
        }
    }

    double avg = (double)sum_len / count;
    // 평균을 소수점 둘째 자리까지 반올림
    printf("%d %.2f\n", count, avg);

    return 0;
}
