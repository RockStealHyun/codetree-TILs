#include <stdio.h>

int main() {

    while(1) {
        // 변수를 선언하고 입력을 받습니다.
        int n;
        scanf("%d", &n);
        
        // 입력받은 값이 0이면 종료합니다.
        if(n == 0)
            break;
        
        // n이 0이 아닌 경우에는, 계속 값을 출력해줍니다.
        printf("%d\n", n);
    }
    return 0;
}