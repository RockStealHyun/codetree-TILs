#include <stdio.h>

int main() {
    // 배열을 만들고 문자 a를 입력받습니다.
	char word[6] = { 'L', 'E', 'B', 'R', 'O', 'S' };
	char a;
	scanf("%c", &a);
	// idx : a와 같은 문자의 인덱스, a와 같은 것이 없으면 -1
	int idx = -1;
	
	// a와 같은 문자가 있는지 확인합니다.
	for(int i = 0; i < 6; i++) {
		if(word[i] == a)
			idx = i;
	}
	
	// 같은 것이 없으면 None을, 있다면 그 인덱스를 출력합니다.
	if(idx == -1)
		printf("None");
	else
		printf("%d", idx);

    return 0;
}
