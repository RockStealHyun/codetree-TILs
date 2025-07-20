#include <stdio.h>

int main(void) {
    int T;            // 테스트 케이스 개수
    scanf("%d", &T);

    for (int tc = 0; tc < T; tc++) {
        int a, b;
        scanf("%d %d", &a, &b);  

        int sum = 0;   // 짝수의 합을 저장할 변수
        // a부터 b까지 하나씩 살펴보며
        for (int x = a; x <= b; x++) {
            if (x % 2 == 0) {    // 짝수이면
                sum += x;        // sum에 더해준다
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
