#include <stdio.h>

int main() {
    // 배열 선언
    int arr[10];

    int sum1 = 0;
    int sum2 = 0;

    // 10개의 정수를 배열에 입력받아 저장합니다.
    for(int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    // 10개의 정수 중 홀수번째 수들의 합과 짝수번째 수들의 합을 구합니다.
    for(int i = 0; i < 10; i++) {
        if(i % 2 == 0)
            sum1 += arr[i];
        else
            sum2 += arr[i];
    }

    // sum1 과 sum2 의 크기를 비교하여 큰 쪽에서 작은쪽을 뺍니다.
    if(sum1 > sum2)
        printf("%d", sum1 - sum2);
    else
        printf("%d", sum2 - sum1);

    return 0;
}