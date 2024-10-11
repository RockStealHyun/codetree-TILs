#include <stdio.h>

int main() {
    int arr[10]; 
    int count = 0; 
    // 정수 입력 받기
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break; 
        }
        count++; 
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}