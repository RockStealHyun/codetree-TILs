#include <stdio.h>

int main(void){
    char bin[9];      // 최대 8자리 + '\0'
    scanf("%s", bin);

    int dec = 0;
    for(int i = 0; bin[i] != '\0'; i++){
        dec = dec * 2 + (bin[i] - '0');   // 왼쪽으로 한 비트 밀고 현재 자리 더하기
    }

    printf("%d\n", dec);
    return 0;
}
