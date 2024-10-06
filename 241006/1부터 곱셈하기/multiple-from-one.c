#include <stdio.h>

int main() {
    int n;
    int i;
    int semp = 1;
  
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        semp = semp*i;
        if (n <= semp) { 
            break;
        }
    }
    
    printf("%d", i);  // sum 값을 출력

    return 0;
}