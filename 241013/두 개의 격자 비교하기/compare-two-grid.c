#include <stdio.h>

int main() {

	int n,m,i,j;
	int arr_1[10][10];
	int arr_2[10][10];
	int arr_3[10][10];
	
	scanf("%d%d",&n,&m);


	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &arr_1[i][j]);
	

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &arr_2[i][j]);
	
	for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr_1[i][j] == arr_2[i][j]) {
                arr_3[i][j] = 0;
            } else {
                arr_3[i][j] = 1;
            }
        }
    }

	for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr_3[i][j]);
        }
        printf("\n");
    }



    return 0;
}