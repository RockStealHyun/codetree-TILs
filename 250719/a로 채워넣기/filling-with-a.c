#include <stdio.h>
#include <string.h>

int main() {
    char name1[200];


    scanf("%s", name1);  // & 없어도 됨
    int len1 = strlen(name1);
    name1[1] = 'a';
    name1[len1 -2] = 'a';

    printf("%s", name1);      

    return 0;
}


