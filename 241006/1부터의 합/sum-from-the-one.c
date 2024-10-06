#include <stdio.h>

int main() {
    int n;
    int i;
    int sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= 100; i++) {
        sum = sum + i;
        if (n <= sum) { 
            break;
        }
    }
    
    printf("%d", n);  // sum 값을 출력

    return 0;
}