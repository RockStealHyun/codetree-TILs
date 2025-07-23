#include <stdio.h>

#define SZ 200000          // 넉넉하게
#define MID 100000         // 시작 인덱스

int main(void){
    int N, x;
    char dir;
    int color[SZ] = {0};   // 0:안 뒤집힘, 1:흰색(L), 2:검은색(R)

    int pos = MID;         // 현재 위치
    int mn = MID, mx = MID;

    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d %c", &x, &dir);
        if(dir=='L'){
            for(int k=0;k<x;k++){
                int p = pos - k;
                color[p] = 1;
                if(p<mn) mn=p;
            }
            pos -= (x-1);          // 마지막으로 뒤집은 타일 위치
        }else{ // 'R'
            for(int k=0;k<x;k++){
                int p = pos + k;
                color[p] = 2;
                if(p>mx) mx=p;
            }
            pos += (x-1);
        }
    }

    int wcnt=0, bcnt=0;
    for(int i=mn;i<=mx;i++){
        if(color[i]==1) wcnt++;
        else if(color[i]==2) bcnt++;
    }

    printf("%d %d\n", wcnt, bcnt);
    return 0;
}
