#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int arr[10];  // N ≤ 10
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // 처음 인접 차이로 초기화
    int min_diff = arr[1] - arr[0];

    // 인접한 쌍의 차이를 모두 비교
    for (int i = 1; i < N - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    printf("%d\n", min_diff);
    return 0;
}
