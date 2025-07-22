#include <stdio.h>

void sort(int a[], int n) {              // 오름차순 (단순 선택정렬)
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[m]) m = j;
        int t = a[i]; a[i] = a[m]; a[m] = t;
    }
}

int main(void) {
    int N, x[2000];
    scanf("%d", &N);
    for (int i = 0; i < 2 * N; i++) scanf("%d", &x[i]);

    sort(x, 2 * N);

    int max_sum = 0;
    for (int i = 0; i < N; i++) {                 // 작은+큰 묶기
        int s = x[i] + x[2 * N - 1 - i];
        if (s > max_sum) max_sum = s;
    }
    printf("%d", max_sum);
    return 0;
}
