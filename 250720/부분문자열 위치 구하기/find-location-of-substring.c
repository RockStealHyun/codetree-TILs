#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char input_str[1001], target_str[1001];

int main() {
    scanf("%s", input_str);
	scanf("%s", target_str);

    int input_len = strlen(input_str);
    int target_len = strlen(target_str);

    // 입력 문자열의 각 문자를 시작점으로 하여 목적 문자열을 만들 수 있는지 확인합니다.
    for(int i = 0; i < input_len; i++) {
        // input_str의 i 부터 i + target_len - 1까지의 원소가
        // target_len의 0부터 target_len - 1 까지의 원소와
		// 정확히 일치하는지 확인합니다.
        
        // 만약 input_str의 끝 원소인 i + target_len - 1 번째가
		// 존재하지 않는다면 비교를 하지 않습니다.
        if(i + target_len - 1 >= input_len)
            continue;
        
        // input_str의 s_idx1에서 e_idx1 까지의 문자열과
        // output_str의 s_idx2에서 e_idx2 까지의 문자열과 일치하는지를 비교합니다.
        bool is_matched = true;
        for(int j = 0; j < target_len; j++) {
            if(input_str[i + j] != target_str[j])
                is_matched = false;
        }
        
        if(is_matched) {
            // 모든 문자에 대하여 매칭이 된 경우:
            printf("%d", i);
            return 0;
        }
    }

    // 매칭이 되지 않는 경우:
    printf("-1");
    return 0;
}
