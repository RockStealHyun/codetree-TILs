#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);



    if(a>b) {
        printf("%d",a*b);
    } else {
        printf("%d",b/a);
    }

    return 0;
}


