#include <stdio.h>
#include <string.h>

char input_str[1001];
int str_size;

int main() {
    int q_num;
	scanf("%s", input_str);
	scanf("%d", &q_num);

    str_size = strlen(input_str);

    int q_type;
    for(int i = 0; i < q_num; i++) {
        scanf("%d", &q_type);
        if(q_type == 1) {
            // step1: 가장 앞의 문자를 저장한 뒤,
            // step2: 문자열을 앞부터 순회하며 문자를 한 칸씩 앞으로 당기고
            // step3: 문자열의 제일 뒤에 가장 앞에 있던 문자를 넣어줍니다. 
            char front = input_str[0];             // step1
            for(int i = 1; i < str_size; i++)      // step2
                input_str[i - 1] = input_str[i];
            input_str[str_size - 1] = front;       // step3

            printf("%s\n", input_str);
        }
        else if(q_type == 2) {
            // step1: 가장 뒤의 문자를 저장한 뒤,
            // step2: 문자열의 뒤부터 순회하며 문자를 한 칸씩 뒤로 밀어주고
            // step3: 문자열의 제일 앞에 가장 뒤에 있던 문자를 넣어줍니다. 
            char back = input_str[str_size - 1];    // step1
            for(int i = str_size - 1; i >= 1; i--)  // step2
                input_str[i] = input_str[i - 1];    
            input_str[0] = back;					// step3

            printf("%s\n", input_str);
        }
        else if(q_type == 3) {
            // 문자열의 앞부터 순회하며 좌우 대칭 위치에 있는 문자와 swap해줍니다. 
            // 단, 문자열의 절반만 순회해줍니다. 
            char temp;
            for(int i = 0; i < str_size / 2; i++) {
                temp = input_str[i];
                input_str[i] = input_str[str_size - i - 1];
                input_str[str_size - i - 1] = temp;
            }

            printf("%s\n", input_str);
        }
    }

    return 0;
}
