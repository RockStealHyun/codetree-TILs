#include <stdio.h>

void print_pow(int A, int B) {
    int cnt=0;
    int i;

    for(i=A;i<=B;i=i+1)
        if(i%2==0||i%10==5||(i%3==0&&i%9!=0))
        cnt = cnt;

        else
        cnt = cnt+1;

    printf("%d", cnt);
}

int main(void) {
    int A, B;
    
    scanf("%d %d", &A, &B);   
    print_pow(A, B);
    return 0;
}
