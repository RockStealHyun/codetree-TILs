#include <stdio.h>
#include <stdbool.h>

int main() {

	int a,b,i;
	scanf("%d%d",&a,&b);

	bool satisfied = false;
	for (i = a; i <= b; i++) {
		if (i % (2||3||5) == 0) {
			satisfied = true;
		}
	}
	if (satisfied == true) {
		printf("1");
	}
	else {
		printf("0");
	}

	return 0;

}