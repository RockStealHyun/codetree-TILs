#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);


    for(int first = 1; first <= n; first++) {
        for(int second= 1 ; second <= n-first+1; second++) {
            if(second == 1) {
               
                printf("%d * %d = %d", first, second, first * second);
            }
            else {
               
                printf(" / %d * %d = %d", first, second, first * second);
            }

            if(first + second == n+1) {
                
                printf("\n");
            }
        }
    }
    return 0;
}
