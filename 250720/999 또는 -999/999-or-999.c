#include <stdio.h>

int main() {
    // 배열을 구현합니다.
	int arr[100];
	
	// 999나 -999가 주어지기 전까지 100개의 정수를 입력받습니다.
	for(int i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] == 999 || arr[i] == -999)
			break;
	}
	
	int max_val = arr[0];
	int min_val = arr[0];
	
	// 주어진 숫자들 중 최댓값과 최솟값을 구합니다.
	for(int i = 1; i < 100; i++) {
		if(arr[i] == 999 || arr[i] == -999)
			break;
		
		if(arr[i] > max_val)
			max_val = arr[i];
		
		if(arr[i] < min_val)
			min_val = arr[i];
	}
	
    // 최댓값과 최솟값을 출력합니다.
    printf("%d %d", max_val, min_val);

    return 0;
}
