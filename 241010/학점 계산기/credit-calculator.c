#include <stdio.h>

int main() {
    
	int n;
    int cnt=0;
	scanf("%d", &n);
	double val[100];
	double sum_val = 0;
    double average;

	for (int i = 0; i < n; i++) {
		scanf("%lf", &val[i]);
   		sum_val += val[i];
    }

        average = sum_val / n;
        printf("%.1f\n", average);
        if(average<3.0){
    
            printf("Poor");}
        else if (average<4.0&& 3.0<=average){

            printf("Good");}
        else{
    
            printf("Perfect");}

    }