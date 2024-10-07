#include <stdio.h>
#include <stdbool.h>

int main() {

	int a,b,c,d,e;
	scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);

	bool satisfied = true;{
    if (a % 3 == 0&&b % 3 == 0&&c % 3 == 0&&d % 3 == 0&&e % 3 == 0) {
			satisfied = false;
		}
	}
	
    if (satisfied == true) {
		printf("0");
	}
	else {
		printf("1");
	}

	return 0;

}