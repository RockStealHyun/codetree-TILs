#include <stdio.h>
#include <string.h>

typedef struct {
    char name[11];   // 이름
    char addr[11];   // XXX-XXX
    char city[11];   // 지역
} Person;

int main(void) {
    int n;
    scanf("%d", &n);

    Person best, cur;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", cur.name, cur.addr, cur.city);
        if (i == 0 || strcmp(cur.name, best.name) > 0) {
            best = cur;               // 이름이 더 "늦으면" 교체
        }
    }

    printf("name %s\n", best.name);
    printf("addr %s\n", best.addr);
    printf("city %s\n", best.city);
    return 0;
}
