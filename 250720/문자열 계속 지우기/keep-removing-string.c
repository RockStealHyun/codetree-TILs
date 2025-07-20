#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char str_a[101], str_b[101];
int len_a, len_b;

int main() {
    scanf("%s", str_a);
    scanf("%s", str_b);

    len_a = strlen(str_a);
    len_b = strlen(str_b);

    while(true) {
        // a문자열에서 b문자열이 처음 등장하는 위치를 찾습니다.
        int idx = -1;

        // Tip1: 우리는 i, i+1, ..., i+len_b-1을 비교할 것입니다.
        // 이 때 마지막 위치는 i+len_b-1 < len_a를 만족해야
        // 하므로 i < len_a - len_b + 1을 구할 수 있습니다.

        int candidates = len_a - len_b + 1;
        for(int i = 0; i < candidates; i++) {
            // i부터 b길이만큼 비교해서 b와 같은지 체크합니다.
            bool is_same = true;
            for(int j = 0; j < len_b; j++) {
                if(str_a[i + j] != str_b[j]) {
                    is_same = false;
                    break;
                }
            }
            if(is_same) {
                // 문자열을 찾았으므로 i 반환
                idx = i;
                break;
            }
        }
        
        // 찾지 못한 경우
        if(idx == -1)
            break;
        
        // a문자열에서 idx위치에서 b문자열의 길이만큼의 문자를 지웁니다.

        for(int i = idx + len_b; i < len_a; i++)
            str_a[i - len_b] = str_a[i];
        
        str_a[len_a - len_b] = '\0';

        len_a = strlen(str_a);
    }

    printf("%s", str_a);

    return 0;
}
