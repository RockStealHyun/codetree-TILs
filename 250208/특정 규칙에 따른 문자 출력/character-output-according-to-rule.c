#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		for(int j = n-i; j >1; j=j-1)
			printf("  ");
		for(int j = 0; j <=i; j++)
			printf("@ ");
		printf("\n");
    }
	
	for(int i = n-2; i >= 0; i--) {

		for(int j = i; j >=0 ; j--)
			printf("@ ");
		printf("\n");
    }
	
    return 0;
}
