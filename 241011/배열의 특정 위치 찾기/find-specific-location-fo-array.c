#include <stdio.h>

int main() {

	int arr[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d ", arr[1]+arr[3]+arr[5]+arr[7]+arr[9]);
    printf("%.1f ", (float)(arr[2]+arr[5]+arr[8])/3);

	return 0;
}