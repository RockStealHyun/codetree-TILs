#include <stdio.h>

// N줄 동안 문자열을 출력하는 함수
void printLines(int n) {
    for (int i = 0; i < n; i++) {
        // 한 줄에 문자열을 출력한 뒤 줄바꿈
        printf("12345^&*()_\n");
    }
}

int main(void) {
    int N;
    
    // 출력할 줄 수 입력 받기
    scanf("%d", &N);
    
    // 함수 호출해서 N줄 출력
    printLines(N);
    
    return 0;
}
