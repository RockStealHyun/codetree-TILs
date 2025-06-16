#include <stdio.h>

int main() {
    int N;
    int i;

    scanf("%d", &N);

    for (i = N; i <= 5*N; i=i+N) {
        printf("%d ", i);
    }
    return 0;
}




