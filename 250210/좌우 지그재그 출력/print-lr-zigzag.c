#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
	

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(i % 2 == 0)
				printf("%d ",n*i-j+1);
			else
				printf("%d ",n*(i-1)+j);
		}
		printf("\n");
	}
	
	return 0;
}

