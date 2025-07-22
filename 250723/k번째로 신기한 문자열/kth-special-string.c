#include <stdio.h>
#include <string.h>

void sort(char a[][101], int n) {          // 사전순 정렬
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++)
            if (strcmp(a[j], a[m]) < 0) m = j;
        if (m != i) {
            char tmp[101];
            strcpy(tmp, a[i]);
            strcpy(a[i], a[m]);
            strcpy(a[m], tmp);
        }
    }
}

int main(void) {
    int N, K;
    char T[101];
    char keep[100][101];   // 조건을 만족하는 단어 저장
    int cnt = 0;

    scanf("%d %d %s", &N, &K, T);

    for (int i = 0; i < N; i++) {
        char w[101];
        scanf("%s", w);
        if (strncmp(w, T, strlen(T)) == 0) {   // T로 시작?
            strcpy(keep[cnt++], w);
        }
    }

    sort(keep, cnt);
    printf("%s", keep[K - 1]);
    return 0;
}
