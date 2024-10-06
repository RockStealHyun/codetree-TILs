#include <stdio.h>
#include <stdbool.h>

int main() {

    int N, cnt = 0;
    scanf("%d", &N);

    while (true) {
        if (N % 2 == 0) {  // N이 짝수일 때
            N = N / 2;
            cnt = cnt + 1;
         
        }
        else if (N % 2 !=0&&N !=1){  // N이 홀수일 때
            N = N * 3 + 1;
            cnt = cnt + 1;
        
        }

        else  {  // N이 1이 되면 종료
        
            break;
        }
    }

    printf("%d", cnt);  // 총 작업 횟수 출력

    return 0;
}