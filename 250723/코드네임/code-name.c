#include <stdio.h>

typedef struct {
    char code[21];   // 코드네임(대문자만이라 해도 넉넉히 20자)
    int score;
} Agent;

int main(void) {
    Agent a[5];
    int min_i = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", a[i].code, &a[i].score);
        if (i == 0 || a[i].score < a[min_i].score)
            min_i = i;
    }

    printf("%s %d", a[min_i].code, a[min_i].score);
    return 0;
}
