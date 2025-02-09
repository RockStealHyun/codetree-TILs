#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);
	
	// n칸의 정사각형에서 i, j가 조건에 맞으면 *을 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i > j || i == 0 || j == n - 1) 
            printf("* ");
			
            else printf("  ");
		}
		printf("\n");
	}
	
	return 0;
}
