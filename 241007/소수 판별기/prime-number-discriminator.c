#include <stdio.h>
#include <stdbool.h>

int main() {

	int n;
	scanf("%d", &n);

	bool satisfied = true;
	for (int i = 2; i <= n-1; i++) {
		if (n % i == 0) {
			satisfied = false;
		}
	}
	if (satisfied == true) {
		printf("P");
	}
	else {
		printf("C");
	}

	return 0;

}