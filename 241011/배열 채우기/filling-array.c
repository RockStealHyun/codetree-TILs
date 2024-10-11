#include <stdio.h>

int main() {
    int arr[10]; 
    int count = 0; 
    // 정수 입력 받기
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break; // 0이 입력되면 입력 중단
        }
        count++; // 입력된 정수의 개수를 증가
    }

    // 역순으로 출력
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}