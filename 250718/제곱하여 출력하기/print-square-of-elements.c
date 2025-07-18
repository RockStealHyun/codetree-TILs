#include <stdio.h>

int main() {
    // 변수 선언
    int n;
    scanf("%d", &n);

    // 배열 선언
    int arr[100];
	int new_arr[100];

    // n개의 정수를 배열에 입력받아 저장합니다.
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // n개의 정수를 제곱하여 새로운 배열에 넣습니다.
    for(int i = 0; i < n; i++) {
        new_arr[i] = arr[i] * arr[i];
    }

    // n개의 정수를 출력합니다.
    for(int i = 0; i < n; i++) {
        printf("%d ", new_arr[i]);
    }

    return 0;
}
