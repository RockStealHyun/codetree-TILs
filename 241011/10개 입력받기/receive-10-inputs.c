#include <stdio.h>

int main() {
    int arr[10]; 
    int count = 0;
    int sum = 0; 
    int cnt = 0;
    double average;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break; 
        }
        cnt++;
        sum = sum + arr[i]; 
    }
    average = (float)sum/(cnt);
    printf("%d ",sum);
    printf("%.1lf",average);
    return 0;
}