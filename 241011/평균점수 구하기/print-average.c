#include <stdio.h>

int main() {

	double arr[8];
	double sum_val = 0;
    double average;

	for (int i = 0; i < 8; i++) {
		scanf("%lf", &arr[i]);
		sum_val += arr[i];
        average = sum_val / 8;
    }

	printf("%.1lf", average);
	return 0;

}