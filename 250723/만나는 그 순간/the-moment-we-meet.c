#include <stdio.h>

typedef struct {
    char d;   // 'L' 또는 'R'
    int  t;   // 지속 시간(초)
} Move;

int main(void){
    int N, M;
    Move A[1000], B[1000];

    scanf("%d %d", &N, &M);
    for(int i=0;i<N;i++) scanf(" %c %d", &A[i].d, &A[i].t);
    for(int i=0;i<M;i++) scanf(" %c %d", &B[i].d, &B[i].t);

    int posA = 0, posB = 0;
    int iA = 0, iB = 0;        // 현재 동작 인덱스
    int leftA = A[0].t, leftB = B[0].t;  // 해당 동작이 남은 시간
    int time = 0;

    while(iA < N && iB < M){
        time++;

        // A 한 칸 이동
        posA += (A[iA].d == 'L' ? -1 : 1);
        leftA--;
        if(leftA == 0){
            iA++;
            if(iA < N) leftA = A[iA].t;
        }

        // B 한 칸 이동
        posB += (B[iB].d == 'L' ? -1 : 1);
        leftB--;
        if(leftB == 0){
            iB++;
            if(iB < M) leftB = B[iB].t;
        }

        if(posA == posB){          // 처음 만난 순간
            printf("%d\n", time);
            return 0;
        }
    }

    // 끝날 때까지 못 만남
    printf("-1\n");
    return 0;
}
