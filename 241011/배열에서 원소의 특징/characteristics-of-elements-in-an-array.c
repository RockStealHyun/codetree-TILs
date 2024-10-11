#include <stdio.h>

int main() {
    int arr[10];
    
    // 배열의 10개 원소 입력받기
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 3의 배수가 처음으로 등장하는 부분의 바로 앞 원소 찾기
    for (int i = 1; i < 10; i++) {
        if (arr[i] % 3 == 0) {
            // 3의 배수 바로 앞 원소 출력
            printf("%d\n", arr[i - 1]);
            return 0; // 프로그램 종료
        }
    }

   

    return 0;
}