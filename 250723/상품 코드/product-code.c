#include <stdio.h>

typedef struct {
    char name[11];  // 상품명(최대 10글자 + '\0')
    int  code;      // 상품 코드
} Product;

int main(void) {
    Product a = {"codetree", 50}; // 미리 초기화
    Product b;                    // 입력 받을 객체

    scanf("%s %d", b.name, &b.code);

    printf("product %d is %s\n", a.code, a.name);
    printf("product %d is %s\n", b.code, b.name);

    return 0;
}
