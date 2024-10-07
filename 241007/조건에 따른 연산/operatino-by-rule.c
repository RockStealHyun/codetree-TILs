#include <stdio.h>  // 표준 입출력 라이브러리 포함

int main() {
    int cnt = 0;
int n;
scanf("%d", &n);
while (n<1000) {
    if(n % 2 == 0) 
    n=n*3+1;

    else 
    n=n*2+2;
    cnt = cnt+1;
}
printf("%d", cnt);
  return 0;
}