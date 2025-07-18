#include <stdio.h>

int main() {
    // 크기가 10인 배열을 구현합니다.
    char arr[10];
	
    // 0부터 9까지의 인덱스에 주어진 문자를 차례대로 입력받습니다.
    for(int i = 0; i < 10; i++) {
        scanf(" %c", &arr[i]);
    }
	
    // 9부터 0까지의 인덱스에 주어진 문자를 차례대로 출력합니다.
    for(int i = 9; i >= 0; i--) {
        printf("%c", arr[i]);
    }
	
    return 0;
}
