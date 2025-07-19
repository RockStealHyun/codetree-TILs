#include <stdio.h>

int main() {
    // 정수의 개수 n을 입력받습니다.
    int n;
    scanf("%d", &n);

    // 변수를 선언합니다.
    int arr[100];

    // 배열에 정수들을 차례로 입력받습니다.
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	
	// 입력받은 수들을 거꾸로 보면서 짝수인 값만 출력합니다.
	for(int i = n - 1; i >= 0; i--) {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    return 0;
}
