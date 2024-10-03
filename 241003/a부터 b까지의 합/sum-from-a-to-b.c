#include <stdio.h>

int main() {

	int a ,b;
	int sum_val = 0;
    scanf("%d %d",&a,&b);

	for (int i = a; i <= b; i++) {
			sum_val += i;
		
	}
	printf("%d", sum_val);
	return 0;

}