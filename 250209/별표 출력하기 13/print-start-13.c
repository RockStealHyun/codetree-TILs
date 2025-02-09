#include<stdio.h>

int main() {
 
    int n;
    scanf("%d", &n);
	
    
	for(int i = 1; i <= n; i++) {
		if(i % 2 == 0) {
			for(int k = 1; k <= (i / 2); k++)
				printf("* ");
		}
	
		else {
			for(int k = 0; k <= n- (i / 2)-1; k++)
				printf("* ");
		}
		printf("\n");
	}

	for(int i = n+1; i <= 2*n; i++) {
		if(i % 2 == 0) {
			for(int k = 1; k <= (i / 2); k++)
				printf("* ");
		}
	
		else {
			for(int k = 0; k <= n- (i / 2)-1; k++)
				printf("* ");
		}
		printf("\n");
	}







    return 0;
}





