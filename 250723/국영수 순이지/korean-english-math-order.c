#include <stdio.h>
#include <string.h>

typedef struct {
    char name[11];
    int  kor, eng, math;
} Stu;

int main(void) {
    int n;
    Stu a[10], t;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %d %d %d", a[i].name, &a[i].kor, &a[i].eng, &a[i].math);

    // 키(국영수) 우선순위: 국어 ↓, 영어 ↓, 수학 ↓
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            if (a[i].kor  < a[j].kor ||
               (a[i].kor  == a[j].kor  && a[i].eng  < a[j].eng) ||
               (a[i].kor  == a[j].kor  && a[i].eng == a[j].eng && a[i].math < a[j].math)) {
                t = a[i]; a[i] = a[j]; a[j] = t;
            }
        }

    for (int i = 0; i < n; i++)
        printf("%s %d %d %d\n", a[i].name, a[i].kor, a[i].eng, a[i].math);

    return 0;
}
