#include <stdio.h>
#include <string.h>

#define MAX_T 251
#define MAX_N 105

int N, K, P, T;
int infected[MAX_N];      // 감염 여부
int infect_time[MAX_N];   // 감염된 시각
int contact[MAX_T][MAX_N][MAX_N]; // [시간][a][b] = 1이면 t초에 a-b 약속

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    scanf("%d %d %d %d", &N, &K, &P, &T);

    int t, x, y;
    for (int i = 0; i < T; ++i) {
        scanf("%d %d %d", &t, &x, &y);
        contact[t][x][y] = 1;
        contact[t][y][x] = 1; // 쌍방 약속
    }

    memset(infected, 0, sizeof(infected));
    memset(infect_time, -1, sizeof(infect_time));

    infected[P] = 1;
    infect_time[P] = 0;

    for (t = 1; t < MAX_T; ++t) {
        for (int a = 1; a <= N; ++a) {
            if (!infected[a] || infect_time[a] == -1) continue;
            if (t - infect_time[a] > K) continue;

            for (int b = 1; b <= N; ++b) {
                if (contact[t][a][b]) {
                    if (!infected[b]) {
                        infected[b] = 1;
                        infect_time[b] = t;
                    }
                }
            }
        }
    }

    for (int i = 1; i <= N; ++i) {
        printf("%d", infected[i]);
    }
    printf("\n");

    return 0;
}
