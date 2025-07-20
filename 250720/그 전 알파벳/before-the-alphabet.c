#include <stdio.h>

int main(void) {
    char c;
    scanf(" %c", &c);

    if (c == 'a') {
        putchar('z');
    } else {
        putchar(c - 1);
    }
    putchar('\n');
    return 0;
}
