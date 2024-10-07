#include <stdio.h>
#include <string.h>

int main() {
  
    int n;
    scanf("%d", &n);

    char n_str[10]; 
    sprintf(n_str, "%d", n); 

    int sum = 0;  
    for (int i = 0; n_str[i] != '\0'; i++) {
        sum += n_str[i] - '0';  
    }

    printf("%d\n", sum); 

    return 0;
}