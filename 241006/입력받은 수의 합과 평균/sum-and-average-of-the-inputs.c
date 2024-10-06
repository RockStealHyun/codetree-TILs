#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int score;
        scanf("%d", &score);
        sum += score;
    }
    

    double avg = (double)sum / n;
    
    printf("%d %.1lf", sum, avg);
    return 0;
}