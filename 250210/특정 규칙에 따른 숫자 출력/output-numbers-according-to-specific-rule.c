#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);
	int cnt = 1;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++)
			printf("  ");
		for(int j = 0; j < n - i; j++) {
			printf("%d ", cnt);
			cnt++;
			if(cnt == 10)
				cnt = 1;
		}
		printf("\n");
	}
	
	return 0;
}
