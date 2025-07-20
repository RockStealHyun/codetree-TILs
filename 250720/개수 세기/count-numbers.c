#include <stdio.h>

int main() {
    // 정수 n과 m을 입력받습니다.
	int n, m;
	scanf("%d %d", &n, &m);
	int arr[100];
	int cnt = 0;
	
	// arr[i]를 입력받은 후 m과 같으면 cnt를 1 증가시킵니다.
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] == m)
			cnt++;
	}
	
    // m이 나온 횟수를 출력합니다.
    printf("%d", cnt);

    return 0;
}
