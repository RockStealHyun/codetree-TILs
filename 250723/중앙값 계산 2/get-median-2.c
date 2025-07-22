#include <stdio.h>

void sort(int a[], int n) {                 // 오름차순 정렬
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
        }
    }
}

int main(void) {
    int N, x, arr[100], cnt = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        arr[cnt++] = x;

        if (cnt % 2 == 1) {                 // 홀수 개 읽었을 때마다
            sort(arr, cnt);                 // 지금까지 것들만 정렬
            printf("%d ", arr[cnt / 2]);    // 중앙값 출력
        }
    }
    return 0;
}
