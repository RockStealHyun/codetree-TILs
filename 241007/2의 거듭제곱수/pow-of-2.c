#include <stdio.h>  // 표준 입출력 라이브러리 포함

int main() {
    int cnt = 0;
int N;
scanf("%d", &N);
while (N %2== 0) {
    if(N % 2 == 0) 
    N=N/2;

    else 
    N = 3 * N + 1;
    cnt = cnt+1;
}
printf("%d", cnt);
  return 0;
}