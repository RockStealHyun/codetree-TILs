#include <stdio.h>

// 별 10개를 출력하는 함수
void Print10Stars() {
    for(int i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    // 별 10개를 출력하는 함수를 5번 호출
    for(int i = 0; i < 5; i++) {
        Print10Stars();
    }
    
    return 0;
}