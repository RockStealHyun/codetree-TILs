#include <stdio.h>

int main() {

    int i;
	int arr[9];
    
	scanf("%d %d",&arr[0],&arr[1]);

	
	for (int i = 2; i < 10; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i] % 10);
	}


	return 0;

}