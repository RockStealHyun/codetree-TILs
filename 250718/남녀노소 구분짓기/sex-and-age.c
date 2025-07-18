#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int gender, age;
    scanf("%d %d", &gender, &age);
    if (gender==0) {
        if (age >=19) {
            printf("MAN");
        }
        else {
            printf("BOY");
        }
    }
    else if (gender == 1) {
        if (age>=19) {
            printf("WOMAN");
        }
        else {
            printf("GIRL");
        }
        }
    return 0;
}
