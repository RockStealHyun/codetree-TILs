#include <stdio.h>

int main() {
	//배열 선언
	int count_arr[10] = {0,};
	int arr[99];
	
	// arr[i]를 입력받은 후 카운팅 배열을 통해 십의 자리수 각각의 빈도 저장, 0이 나오면 for문에서 빠져나오기
	for(int i = 0; i < 99; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] == 0)
			break;
		if(arr[i] < 10)
			continue;
		count_arr[arr[i] / 10]++;
	}
	
    // 1부터 9까지 나온 횟수를 출력
    for(int i = 1; i <= 9; i++) {
        printf("%d - %d\n", i, count_arr[i]);
    }

    return 0;
}
