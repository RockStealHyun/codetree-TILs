#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // 배열 선언
    int arr[100];
  	int new_arr[100];
  	int cnt = 0;

    // n개의 정수를 입력받아 배열에 저장
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
  
  	// n개의 정수 중 짝수만 새로운 배열에 저장
    for(int i = 0; i < n; i++)
    	if(arr[i] % 2 == 0)
        	new_arr[cnt++] = arr[i];

    // n개의 정수 중 짝수만 출력
    for(int i = 0; i < cnt; i++)
    	printf("%d ", new_arr[i]);

    return 0;
}
