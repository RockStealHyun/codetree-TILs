#include <stdio.h>

int main() {

	int a,b,i;
	int sum_val = 0;

	for (int i = a; i <= b; i++) {
		if (i % 5 == 0) {
			sum_val += i;
		}
	}
	printf("%d", sum_val);
	return 0;

}