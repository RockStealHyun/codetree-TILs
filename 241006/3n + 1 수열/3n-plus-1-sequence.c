#include <stdio.h>
#include <stdbool.h>

int main() {

    int N, cnt = 0;
    scanf("%d", &N);

    while (true) {
        if (N % 2 == 0) {  
            N = N / 2;
            cnt = cnt + 1;

        }
        else {  
            N = N * 3 + 1;
            cnt = cnt + 1;

        }

    if (N == 1) {  

            break;
        }
    }

    printf("%d", cnt);  

    return 0;
}