#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 문자열을 정의합니다.
	char a[5];
	char b[5];
	char str1[7];
	char str2[7];
	
	// 문자열을 입력받습니다.
	scanf("%s", a);
	scanf("%s", b);
	
	// 문자열의 길이를 구합니다.
	int len_a = strlen(a);
	int len_b = strlen(b);
	int tot_idx1 = 0;
	int tot_idx2 = 0;
	
	// str1에는 a, b 순으로 문자열을 붙입니다.
	for(int i = 0; i < len_a; i++)
		str1[tot_idx1++] = a[i];
	
	for(int i = 0; i < len_b; i++)
		str1[tot_idx1++] = b[i];
	
	// str2에는 b, a 순으로 문자열을 붙입니다.
	for(int i = 0; i < len_b; i++)
		str2[tot_idx2++] = b[i];
	
	for(int i = 0; i < len_a; i++)
		str2[tot_idx2++] = a[i];
	
	// 합쳐진 문자열을 숫자로 바꿉니다.
	int str1_int = atoi(str1);
	int str2_int = atoi(str2);
	
	// 두 숫자의 합을 출력합니다.
	printf("%d", str1_int + str2_int);
	
    return 0;
}
