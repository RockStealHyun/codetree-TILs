#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    // n이 1이면 별 하나만 찍고 종료
    if(n == 1) {
        printf("*\n");
        return 0;
    }

    // 각 줄의 최대 폭(별과 사이 공백을 포함한 총 길이)
    int width = 2 * n - 1;

    // 총 n줄을 차례대로 출력
    for(int i = 0; i < n; i++) {
        // 우선 한 줄 전체를 공백으로 초기화
        char line[256];
        memset(line, ' ', sizeof(line));
        // width까지만 쓰고 나머지는 문자열 종료
        line[width] = '\0';

        if(i == 0 || i == n - 1) {
            // 맨 윗줄(i=0) 또는 맨 아랫줄(i=n-1):
            // col=0,2,4,...,2*(n-1)에 별을 찍어서 n개 별이 되도록
            for(int k = 0; k < n; k++) {
                int col = 2 * k; 
                line[col] = '*';
            }
        } else {
            // 중간 줄(i=1 ~ n-2):
            // 왼쪽부터 col=0,2,4,...,2*(i-1)에 별을 찍어서 i개
            for(int k = 0; k < i; k++) {
                int col = 2 * k;
                line[col] = '*';
            }
            // 마지막으로 맨 오른쪽(col=2*(n-1))에도 별 하나
            line[2 * (n - 1)] = '*';
        }

        // 뒤쪽에 남은 공백을 제거해 깔끔하게 만듦
        int end = width - 1;
        while(end >= 0 && line[end] == ' ') {
            line[end] = '\0';
            end--;
        }

        // 현재 줄 출력
        printf("%s\n", line);
    }

    return 0;
}
