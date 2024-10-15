#include<stdio.h>

int main() {
    // 변수 선언:
    int n, m;
    int answer[100][100] = {0};

    // 입력:
    scanf("%d %d", &n, &m);
    
    // Step 1:
    int count = 0;
    for(int col = 0; col < m; col++) {
        if (col % 2 == 0){
            // Case 1:
            for(int row = 0; row < n; row++){
                answer[row][col] = count;
                count++;
            }
        }
        else {
            // Case 2:
            for(int row = n - 1; row >= 0; row--){
                answer[row][col] = count;
                count++;
            }
        }
    }
    
    // 출력:
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < m; col++) 
            printf("%d ", answer[row][col]);
        printf("\n");
    }
    return 0;
}