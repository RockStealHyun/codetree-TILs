#include<stdio.h>

int main() {

    int n;
    int cnt = 9;
    scanf("%d", &n);
	

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			printf("%d", cnt);
			cnt--;
			if(cnt == 0)
				cnt = 9 ;
		}
		printf("\n");
	}
	
	return 0;
}


