#include <stdio.h>

int main() {
    int start, end;
    int answer_cnt = 0;
    scanf("%d %d", &start, &end);

    for(int curr_num = start; curr_num <= end; curr_num++) {
        // Step 1:
        int divisor_cnt = 0;
        for(int divisor = 1; divisor <= curr_num; divisor++){
            if(curr_num % divisor == 0){
                divisor_cnt++;
            }
        }
        // Case 1:
        if(divisor_cnt == 3){
            answer_cnt++;
        }
    }

    printf("%d", answer_cnt);
    
    return 0;
}
