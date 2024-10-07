#include <stdio.h>
#include <stdbool.h>

int main() {

	int a,b,i;
	scanf("%d%d",&a,&b);

	bool satisfied = false;
	for (i = a; i <= b; i++) {
		if (960%i==0) {
			satisfied = true;
		}
		else if (a==b==1)
			continue;
	}
	if (satisfied == true) {
		printf("1");
	}
	else {
		printf("0");
	}

	return 0;

}