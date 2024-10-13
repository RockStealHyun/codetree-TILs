#include <stdio.h>

int main() {

    int i;
	int n;
    int arr[i],brr[i] ;

    scanf("%d",&n);


	for (int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
        brr[i] = arr[i]*arr[i];
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", brr[i]);
	}

	return 0;

}