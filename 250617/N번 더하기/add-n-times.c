#include <stdio.h>

int main() {
    int A,N;
    scanf("%d", &A);
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++)
		printf("%d\n", A+N*i);

    return 0;
}


