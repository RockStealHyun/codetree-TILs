#include <stdio.h>

int main() {
 
	int i,j;
	int arr_2d[4][4];
	int tottal_sum=0;

	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			scanf("%d", &arr_2d[i][j]);
	

    for (i = 0; i < 4; i++) {
        int sum = 0;
        for (j = 0; j <= i; j++)
            sum += arr_2d[i][j];
		
         // 줄바꿈 추가
    tottal_sum = tottal_sum + sum;
	
	}
	printf("%d", tottal_sum);
    return 0;
}