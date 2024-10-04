#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int num;
    int sum = 0, cnt = 0;
    double avg;

    // 입력을 받으며 0이상 200이하의 정수들을 선별합니다.
    for(int i = 1; i <= 10; i++) {
        scanf("%d", &num);
        if(num >= 0 && num <= 200) {
            sum += num;
            cnt++;
        }
    }

    // 0이상 200이하의 정수들의 평균을 구합니다.
    avg = (double)sum / cnt;

    // 출력
    printf("%d %.1lf", sum, avg);

    return 0;
}