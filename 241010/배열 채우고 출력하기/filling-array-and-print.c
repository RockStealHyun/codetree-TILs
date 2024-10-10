#include <stdio.h>

int main() {
    char b[10];

  
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &b[i]); // 문자를 배열에 저장
    }


    for (int i = 9; i >= 0; i--) {
        printf("%c", b[i]); 
    }
    printf("\n"); 

    return 0;
}