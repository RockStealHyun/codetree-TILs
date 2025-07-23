#include <stdio.h>
#include <string.h>

int main(void){
    int m1, d1, m2, d2;
    char A[4];                       // Mon~Sun
    int md[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31}; // 2024은 윤년

    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    scanf("%s", A);

    // m1/d1, m2/d2를 1월 1일부터 몇 번째 날인지로 변환
    int s = d1, e = d2;
    for(int i=1;i<m1;i++) s += md[i];
    for(int i=1;i<m2;i++) e += md[i];

    int total = e - s + 1;           // 포함한 일수

    const char *w[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int target = 0;
    for(int i=0;i<7;i++) if(strcmp(A,w[i])==0) target = i;

    int base = 0;                     // 시작 요일 = Mon
    int cnt = total / 7;
    int rem = total % 7;
    if( (target - base + 7) % 7 < rem ) cnt++;

    printf("%d\n", cnt);
    return 0;
}
