#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 구현합니다.
	char str[101];
	int q;
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// q를 입력받습니다.
	scanf("%d", &q);
	
	// q개의 질의를 수행합니다.
	for(int i = 0; i < q; i++) {
		// 몇번째 질의인지 확인합니다.
		int q_type;
		scanf("%d", &q_type);
		
		if(q_type == 1) {
			// a, b를 입력받은 후, a번째 문자와 b번째 문자를 교환하여 출력합니다.
			int a, b;
			scanf("%d %d", &a, &b);
			
			// a번째 문자와 b번째 문자를 교환합니다.
			char tmp = str[b - 1];
			str[b - 1] = str[a - 1];
			str[a - 1] = tmp;
			
			printf("%s\n", str);
		}
		else {
			// a, b를 입력받은 후, 문자 a를 전부 b로 변경한 뒤 출력합니다.
			char a, b;
			scanf(" %c %c", &a, &b);
			
			// 문자 a를 전부 b로 변경합니다.
			for(int j = 0; str[j] != '\0'; j++)
				if(str[j] == a)
					str[j] = b;
			
			printf("%s\n", str);
		}
	}
	
    return 0;
}
