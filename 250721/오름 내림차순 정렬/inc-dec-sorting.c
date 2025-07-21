#include <stdio.h>

int main() {
    int n;
    // 1) 수의 개수 입력
    scanf("%d", &n);

    int arr[100];
    // 2) n개의 수 입력
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3) 버블 정렬로 오름차순 정렬
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 두 수를 바꿔 줌
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 4) 오름차순 결과 출력
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");

    // 5) 내림차순 결과 출력 (뒤에서 앞으로)
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i != 0) printf(" ");
    }
    printf("\n");

    return 0;
}
