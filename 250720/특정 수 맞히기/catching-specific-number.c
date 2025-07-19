#include <stdio.h>

int main() {
    int A;


    while (A != 25) {
        scanf("%d ", &A);


        if (A < 25) {
            printf("Higher\n");
        } 
        else if(A>25){
            printf("Lower\n");
        }
    if(A==25)
        printf("Good");

    }

    return 0;
}
