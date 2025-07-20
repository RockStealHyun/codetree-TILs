#include <stdio.h>

int main() {
    int start, end;
    int answer_cnt = 0;
    scanf("%d %d", &start, &end);

    for(int curr_num = start; curr_num <= end; curr_num++) {
        // Step 1:
        int divisor_sum = 0;
        for(int divisor = 1; divisor <= curr_num-1; divisor++){
            if(curr_num % divisor == 0){
                divisor_sum += divisor;
            }
        }
        // Case 1:
        if(divisor_sum == curr_num){
            answer_cnt++;
        }
    }

    printf("%d", answer_cnt);
    
    return 0;
}
