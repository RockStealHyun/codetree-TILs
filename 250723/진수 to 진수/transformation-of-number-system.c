#include <stdio.h>
#include <string.h>

int main(void){
    int A, B;
    char N[20];
    scanf("%d %d", &A, &B);
    scanf("%s", N);              // A진수 수

    long long dec = 0;           // A진수 → 10진수
    for(int i = 0; N[i]; i++)
        dec = dec * A + (N[i] - '0');

    if(dec == 0){ puts("0"); return 0; }

    char out[40]; int k = 0;     // 10진수 → B진수
    while(dec){
        out[k++] = (dec % B) + '0';
        dec /= B;
    }
    while(--k >= 0) putchar(out[k]);
    putchar('\n');
    return 0;
}
