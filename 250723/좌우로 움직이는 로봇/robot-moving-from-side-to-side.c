#include <stdio.h>
#include <string.h>

#define MAX 100000

char a_dir[MAX], b_dir[MAX];
int a_time[MAX], b_time[MAX];
int a_pos[MAX + 1], b_pos[MAX + 1];

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int total_time = 0;
    for (int i = 0; i < N; ++i) {
        int t;
        char d;
        scanf("%d %c", &t, &d);
        a_time[i] = t;
        a_dir[i] = d;
        total_time += t;
    }

    for (int i = 0; i < M; ++i) {
        int t;
        char d;
        scanf("%d %c", &t, &d);
        b_time[i] = t;
        b_dir[i] = d;
    }

    // A의 이동 경로 시뮬레이션
    int a_cur = 0, a_idx = 0, a_t = 0;
    for (int t = 1; t <= total_time; ++t) {
        if (a_t == 0) {
            a_t = a_time[a_idx];
        }
        if (a_dir[a_idx] == 'L') a_cur--;
        else a_cur++;
        a_pos[t] = a_cur;
        a_t--;
        if (a_t == 0) a_idx++;
    }

    // B의 이동 경로 시뮬레이션
    int b_cur = 0, b_idx = 0, b_t = 0;
    for (int t = 1; t <= total_time; ++t) {
        if (b_t == 0) {
            b_t = b_time[b_idx];
        }
        if (b_dir[b_idx] == 'L') b_cur--;
        else b_cur++;
        b_pos[t] = b_cur;
        b_t--;
        if (b_t == 0) b_idx++;
    }

    // 만나는 횟수 계산
    int count = 0;
    for (int t = 1; t <= total_time; ++t) {
        if (a_pos[t] == b_pos[t] && a_pos[t - 1] != b_pos[t - 1]) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
