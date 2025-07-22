#include <stdio.h>
#include <string.h>

typedef struct {
    char id[11];   // 최대 10글자 + '\0'
    int  lv;
} User;

int main(void) {
    User a = {"codetree", 10}; // 초기값
    User b;

    scanf("%s %d", b.id, &b.lv);

    printf("user %s lv %d\n", a.id, a.lv);
    printf("user %s lv %d", b.id, b.lv);
    return 0;
}
