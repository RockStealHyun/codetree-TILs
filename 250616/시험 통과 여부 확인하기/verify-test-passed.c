#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    if(N>=80) {
        printf("pass");
    } else {
        printf("%d more score", 80-N);
    }

    return 0;
}


