#include <stdio.h>

int main() {
    // 변수 선언 (k : 0이 들어있는 인덱스의 번호)
    int arr[100];
    int k;

    // 0이 입력될 때까지 100개의 정수를 배열에 입력받아 저장합니다.
	for(int i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0){
			k = i;
			break;
		}
	}

    // 출력
    printf("%d", arr[k - 3] + arr[k - 2] + arr[k - 1]);

    return 0;
}