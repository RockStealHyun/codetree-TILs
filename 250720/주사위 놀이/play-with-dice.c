#include <stdio.h>

int main() {
    // 변수 선언
	int count_arr[7] = {0,};
	int arr[10];
	
	// arr[i]를 입력받은 후 카운팅 배열을 통해 각각의 빈도 저장
	for(int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		count_arr[arr[i]]++;
	}
	
    // 1부터 6까지 나온 횟수를 출력
    for(int i = 1; i <= 6; i++) {
        printf("%d - %d\n", i, count_arr[i]);
    }

    return 0;
}
