#include<stdio.h>




 
int main(){

    int N, M;
    scanf("%d %d",&N,&M);


    for(int i = 0; i < N; i++){        // 1
        for(int j = 0; j < M; j++){    // 2
            printf("* ");
        }
        printf("\n");
    }
}
