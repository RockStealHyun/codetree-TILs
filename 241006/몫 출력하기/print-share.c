#include <stdio.h>

int main() {
	
	int cnt = 0;
	
    while(1) {
        
        int n;
        scanf("%d", &n);
		
		
		if(n % 2 == 1)
			continue;
		
		printf("%d\n", n / 2);
		cnt++;
		
		if(cnt >= 3)
			break;
    }
	
    return 0;
}