#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  
	int a, b;
	scanf("%d %d", &a, &b);

	int c = a + b;
	char c_str[10];
	int cnt = 0;

	sprintf(c_str, "%d", c);
	
	
	for(int i = 0; c_str[i] != '\0'; i++)
		if(c_str[i] == '1')
			cnt++;
	

	printf("%d", cnt);
	
    return 0;
}