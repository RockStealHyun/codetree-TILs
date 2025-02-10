#include <stdio.h>

int main() {
    for(int first = 1; first <= 19; first++) {
        for(int second= 1 ; second <= 19; second++) {
            if(second % 2 == 1) {
               
                printf("%d * %d = %d", first, second, first * second);
            }
            else {
               
                printf(" / %d * %d = %d\n", first, second, first * second);
            }

            if(second == 19) {
                
                printf("\n");
            }
        }
    }
    return 0;
}
