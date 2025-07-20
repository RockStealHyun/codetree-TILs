#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int count = 0;  // 2가 몇 번 나왔는지 셀 변수
    int x;

    for (int i = 1; i <= N; i++) {
        scanf("%d", &x);
        if (x == 2) {
            count++;
            if (count == 3) {
                // 2가 세 번째 나온 위치 i를 출력하고 종료
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
