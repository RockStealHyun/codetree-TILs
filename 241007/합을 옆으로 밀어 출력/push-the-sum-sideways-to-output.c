#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n); 
    
    int arr[n];  // n개의 수를 저장할 배열
    int sum = 0;  // 모든 수의 합을 저장할 변수

    // n개의 수 입력받기
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // 입력받은 수를 계속 더함
    }

    // 좌측으로 한 칸 미는 작업을 위해 합계를 문자열로 변환
    char sum_str[50];  // 큰 수를 처리할 수 있는 문자열 배열
    sprintf(sum_str, "%d", sum);  // 합계를 문자열로 변환하여 sum_str에 저장

    // 문자열을 한 칸 왼쪽으로 밀기
    int len = 0;
    while (sum_str[len] != '\0') len++;  // 문자열 길이 계산

    // 첫 번째 문자를 없애고 마지막에 0을 추가
    for (int i = 1; i < len; i++) {
        sum_str[i-1] = sum_str[i];  // 한 칸씩 왼쪽으로 밀기
    }
    sum_str[len-1] = '0';  // 마지막에 0 추가
    sum_str[len] = '\0';  // 문자열의 끝 표시

    // 결과 출력
    printf("%s\n", sum_str);

    return 0;
}