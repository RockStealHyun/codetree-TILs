#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

	int cnt = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", cnt);
			cnt++;
		}
		printf("\n");
	}

	return 0;

}



