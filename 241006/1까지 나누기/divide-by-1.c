#include <stdio.h>

int main() {
    int n;
    int i;
    int cnt = 0;
  
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int quotient = n / i;  // n을 i로 나눈 몫을 저장
        if (quotient <= 1) {  // 몫이 1 이하가 되면 종료
            cnt = cnt + 1;
            break;
        }
        cnt = cnt + 1;  // 나눗셈 횟수를 셈
    }
    
    printf("%d", cnt);  // 나눗셈 진행 횟수 출력

    return 0;
}