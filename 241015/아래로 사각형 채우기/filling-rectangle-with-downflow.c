#include <stdio.h>

int main() {
    int n;

    int arr_2d[10][10];
    scanf("%d", &n);

    int num = 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr_2d[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr_2d[j][i]);
        }
        printf("\n");  
    }

    return 0;
}