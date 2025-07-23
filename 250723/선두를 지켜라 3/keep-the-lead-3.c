#include <stdio.h>

#define MAX 10000

typedef struct {
    int v, t;
} Move;

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    Move a_moves[1000], b_moves[1000];
    int total_time = 0;

    // A 이동 입력
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &a_moves[i].v, &a_moves[i].t);
        total_time += a_moves[i].t;
    }

    // B 이동 입력
    for (int i = 0; i < M; ++i) {
        scanf("%d %d", &b_moves[i].v, &b_moves[i].t);
    }

    int pos_a = 0, pos_b = 0;
    int t = 0, idx_a = 0, idx_b = 0;
    int rem_a = a_moves[0].t, rem_b = b_moves[0].t;
    int va = a_moves[0].v, vb = b_moves[0].v;

    int prev_status = -1, changes = 0;

    for (t = 0; t < total_time; ++t) {
        // 매초마다 이동
        pos_a += va;
        pos_b += vb;

        rem_a--;
        rem_b--;

        if (rem_a == 0 && idx_a + 1 < N) {
            idx_a++;
            va = a_moves[idx_a].v;
            rem_a = a_moves[idx_a].t;
        }

        if (rem_b == 0 && idx_b + 1 < M) {
            idx_b++;
            vb = b_moves[idx_b].v;
            rem_b = b_moves[idx_b].t;
        }

        // 명예의 전당 상태 판단
        int status;
        if (pos_a > pos_b)
            status = 1; // A 앞섬
        else if (pos_b > pos_a)
            status = 2; // B 앞섬
        else
            status = 0; // 같은 위치

        if (status != prev_status) {
            changes++;
            prev_status = status;
        }
    }

    printf("%d\n", changes);
    return 0;
}
