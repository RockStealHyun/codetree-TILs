#include <stdio.h>
#include <string.h>

int main() {
	int c;

	char str1[102];
	char str2[102];
	scanf("%s", str1);
	scanf("%s", str2);

	c = strlen(str1) + strlen(str2); 
	printf("%d", c);

	return 0;
}

