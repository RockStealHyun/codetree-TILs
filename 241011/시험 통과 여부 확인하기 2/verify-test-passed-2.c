#include <stdio.h>

int main() {
    // 학생 수 n 입력받기
    int n;
    scanf("%d", &n);

    // 통과한 사람의 수를 나타내는 변수 : pass_people
    int pass_people = 0;

    for(int i = 0; i < n; i++) {
        // 정수 배열 선언
        int arr[4];
        int sum = 0;

        // 4개의 정수를 배열에 입력받아 저장합니다.
        for(int j = 0; j < 4; j++) {
            scanf("%d", &arr[j]);
        }

        // 4과목의 점수의 합을 구합니다.
        for(int j = 0; j < 4; j++) {
            sum += arr[j];
        }
		
        // 평균을 구합니다.
        double avg = (double)sum / 4;

        //출력
        if(avg >= 60) {
            printf("pass\n");
            pass_people++;
        }
        else
            printf("fail\n");
    }

    // 통과한 사람의 수 출력
    printf("%d", pass_people);

    return 0;
}