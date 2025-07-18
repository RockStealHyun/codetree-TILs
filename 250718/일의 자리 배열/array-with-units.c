

#include <stdio.h>

int main() {
    // 처음 두 수 입력
    int p1, p2;
    scanf("%d %d", &p1, &p2);

    // 배열 선언
    int arr[10] = {p1, p2};

    // 앞의 두 수를 더한 값의 일의 자리 숫자를 다음 원소로 합니다.
    for(int i = 2; i < 10; i++)
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10;

    // 10개의 정수를 출력
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
