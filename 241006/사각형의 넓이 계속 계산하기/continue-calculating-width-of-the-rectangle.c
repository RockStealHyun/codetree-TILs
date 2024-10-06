#include <stdio.h>

int main() {
    while(1) {
   
		int w, h;
		char a;
		scanf("%d %d %c", &w, &h, &a);
		
	
		printf("%d\n", w * h);
		
		if(a == 'C')
			break;
    }
	
    return 0;
}