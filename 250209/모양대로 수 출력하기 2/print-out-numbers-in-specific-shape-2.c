#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);
	int cnt = 1;
	

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			printf("%d ", 2*cnt);
			cnt++;
			if(cnt >= 5)
				cnt = 1 ;
		}
		printf("\n");
	}
	
	return 0;
}
