#include <stdio.h>

int main() {
    // 배열을 구현합니다.
	int arr[10];
	
	// 10개의 정수를 입력받습니다.
	for(int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	
	// max_val : 500 미만의 가장 큰 수, min_val : 500 초과의 가장 작은 수
	int max_val = 1;
	int min_val = 1000;
	
	// 10개의 숫자들 중 500근처의 수들을 구합니다.
	for(int i = 0; i < 10; i++) {
		if(arr[i] < 500 && arr[i] > max_val)
			max_val = arr[i];
		
		if(arr[i] > 500 && arr[i] < min_val)
			min_val = arr[i];
	}
	
    // 구한 값을 출력합니다.
    printf("%d %d", max_val, min_val);

    return 0;
}
