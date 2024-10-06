#include <stdio.h>

int main() {
    while(1) {
        // 변수를 선언하고 입력을 받습니다.
        int n;
        scanf("%d", &n);
        
        // 입력받은 값에 따라 조건을 처리합니다.
        if(n > 25)
            printf("Lower\n");
        else if(n < 25)
            printf("Higher\n");
        else {
            printf("Good\n");
            break;  // 25가 주어지면 루프를 종료합니다.
        }
    }
    return 0;
}