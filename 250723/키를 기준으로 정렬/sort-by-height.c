#include <stdio.h>

typedef struct {
    char name[11];
    int  height;
    int  weight;
} Person;

int main(void) {
    int n, i, j;
    Person a[10], t;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%s %d %d", a[i].name, &a[i].height, &a[i].weight);

    // bubble sort by height (ascending)
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (a[j].height > a[j + 1].height) {
                t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
            }

    for (i = 0; i < n; i++)
        printf("%s %d %d\n", a[i].name, a[i].height, a[i].weight);

    return 0;
}
