#include <stdio.h>

int main() {
    // 원소 수 n 입력받기
	int n;
	scanf("%d", &n);
	int count_arr[10] = {0,};
  	int arr[100];
	
	// arr[i]를 입력받은 후 카운팅 배열을 통해 각각의 빈도 저장
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		count_arr[arr[i]]++;
	}
	
    // 1부터 9까지 나온 횟수를 출력
    for(int i = 1; i <= 9; i++) {
        printf("%d\n", count_arr[i]);
    }

    return 0;
}
