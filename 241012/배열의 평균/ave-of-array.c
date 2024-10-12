#include <stdio.h>

int main() {
 
	int arr_2d[2][4];
	int i;

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 4; j++)
			scanf("%d", &arr_2d[i][j]);
	

	
    int sum1 = 0;
    int sum2 = 0;
    for(int j = 0; j < 4; j++) { 
        	sum1 = arr_2d[0][j] + sum1;
        	sum2 = arr_2d[1][j] + sum2;
    }
    printf("%.1f ", (float)(sum1)/4);
    printf("%.1f\n", (float)(sum2)/4);


	int sum3 = 0;
    int sum4 = 0;
	int sum5 = 0;
	int sum6 = 0;
    for(int i = 0; i < 2; i++) { 
        	sum3 = arr_2d[i][0] + sum3;
        	sum4 = arr_2d[i][1] + sum4;
			sum5 = arr_2d[i][2] + sum5;
			sum6 = arr_2d[i][3] + sum6;

    }
    printf("%.1f ", (float)(sum3/2));
	printf("%.1f ", (float)(sum4/2));
	printf("%.1f ", (float)(sum5/2));
    printf("%.1f\n", (float)(sum6/2));

	int sum7 = 0;
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 4; j++)
		sum7 = sum7+arr_2d[i][j];
	printf("%.1f ", (float)(sum7)/8);	






    return 0;
}