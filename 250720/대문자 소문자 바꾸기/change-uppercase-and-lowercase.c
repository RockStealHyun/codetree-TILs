#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[21];  // 길이 최대 20
    scanf("%20s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (islower(s[i])) {
            putchar(toupper(s[i]));
        } else if (isupper(s[i])) {
            putchar(tolower(s[i]));
        } else {
            putchar(s[i]);
        }
    }
    putchar('\n');
    return 0;
}
