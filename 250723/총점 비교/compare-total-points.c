#include <stdio.h>

typedef struct {
    char name[11];
    int a, b, c;      // 세 과목
    int sum;          // 총점
} Stu;

int main(void) {
    int N;
    Stu s[10], tmp;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %d", s[i].name, &s[i].a, &s[i].b, &s[i].c);
        s[i].sum = s[i].a + s[i].b + s[i].c;
    }

    // 총점 오름차순 정렬
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (s[i].sum > s[j].sum) {
                tmp = s[i]; s[i] = s[j]; s[j] = tmp;
            }

    for (int i = 0; i < N; i++)
        printf("%s %d %d %d\n", s[i].name, s[i].a, s[i].b, s[i].c);

    return 0;
}
