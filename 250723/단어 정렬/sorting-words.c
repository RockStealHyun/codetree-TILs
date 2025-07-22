#include <stdio.h>
#include <string.h>

void swap(char w[][101], int i, int j){
    char t[101];
    strcpy(t, w[i]); strcpy(w[i], w[j]); strcpy(w[j], t);
}

int main(void){
    int n;
    char w[100][101];

    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%s", w[i]);

    // 간단한 버블/선택 정렬
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(strcmp(w[i], w[j]) > 0) swap(w, i, j);

    for(int i = 0; i < n; i++) printf("%s\n", w[i]);
    return 0;
}
