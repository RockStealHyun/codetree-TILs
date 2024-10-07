#include <stdio.h>
#include <stdbool.h>

int main() {

	int n,a,i;
	scanf("%d", &n);

	bool satisfied = false;
	for (i = 2; i <= n-1; i++) {
		if (n % i == 0) {
			satisfied = true;
		}
	}
	if (satisfied == true) {
		printf("C");
	}
	else {
		printf("N");
	}

	return 0;

}