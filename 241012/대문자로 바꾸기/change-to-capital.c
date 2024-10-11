#include <stdio.h>

int main() {

	char arr_2d[5][3];
	

	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 3; j++)
			scanf(" %c", &arr_2d[i][j]);
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 3; j++) {
			arr_2d[i][j] += 'A' - 'a';
			printf("%c ", arr_2d[i][j]);
		}
		printf("\n");
	}

    return 0;
}