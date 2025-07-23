#include <stdio.h>

typedef struct {
    char name[11];
    int  h, w;   // 키, 몸무게
} Person;

int main(void) {
    int n;
    Person a[10], t;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %d %d", a[i].name, &a[i].h, &a[i].w);

    // 키 오름차순, 키 같으면 몸무게 내림차순
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].h > a[j].h ||
               (a[i].h == a[j].h && a[i].w < a[j].w)) {
                t = a[i]; a[i] = a[j]; a[j] = t;
            }

    for (int i = 0; i < n; i++)
        printf("%s %d %d\n", a[i].name, a[i].h, a[i].w);

    return 0;
}
