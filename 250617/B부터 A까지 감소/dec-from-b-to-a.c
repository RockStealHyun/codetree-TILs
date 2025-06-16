#include <stdio.h>

int main() {
    int A;
    int B;
    int i;
    scanf("%d", &A);
    scanf("%d", &B);


    for (i = B; i >= A; i=i-1) {
        printf("%d ", i);
    }
    return 0;
}




