#include <stdio.h>

void sort(int a[], int n) {          // 오름차순 선택정렬
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[m]) m = j;
        int t = a[i]; a[i] = a[m]; a[m] = t;
    }
}

int main(void) {
    int N, K, a[1000];
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; i++) scanf("%d", &a[i]);

    sort(a, N);
    printf("%d", a[K - 1]);          // K번째(1-based)

    return 0;
}
