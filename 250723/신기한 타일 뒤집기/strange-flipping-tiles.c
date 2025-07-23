#include <stdio.h>

#define MAXT 200000
#define MID  100000   // 시작 기준점

int main(void){
    int N, x;
    char dir;
    int color[MAXT] = {0};   // 0:회색, 1:흰색(L), 2:검은색(R)

    int pos = MID;           // 현재 위치
    int L = MID, R = MID;    // 실제 사용 범위

    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d %c", &x, &dir);

        if(dir=='L'){
            for(int k=0;k<x;k++){
                int p = pos - k;
                color[p] = 1;
                if(p < L) L = p;
            }
            pos -= (x-1);
        }else{ // 'R'
            for(int k=0;k<x;k++){
                int p = pos + k;
                color[p] = 2;
                if(p > R) R = p;
            }
            pos += (x-1);
        }
    }

    int white = 0, black = 0;
    for(int i=L;i<=R;i++){
        if(color[i]==1) white++;
        else if(color[i]==2) black++;
    }

    printf("%d %d\n", white, black);
    return 0;
}
