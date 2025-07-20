#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[102], str2[102];
    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 == len2) {
        printf("same");
    } else if (len1 > len2) {
        printf("%s %d", str1, len1);
    } else {
        printf("%s %d", str2, len2);
    }

    return 0;
}
