#include <stdio.h>

int main() {
    int age, sum = 0, count = 0;
    
    while (1) {
        // 나이 입력 받기
        scanf("%d", &age);
        
        // 20대가 아닌 나이가 입력되면 반복 종료
        if (age < 20 || age >= 30) {
            break;
        }
        
        // 20대라면 합산하고 카운트 증가
        sum += age;
        count++;
    }
    
    // 평균 계산 및 출력 (카운트가 0이 아니면 출력)
    if (count > 0) {
        double average = (double)sum / count;
        printf("%.2f\n", average);
    } else {
        printf("No ages in the 20s were entered.\n");
    }

    return 0;
}