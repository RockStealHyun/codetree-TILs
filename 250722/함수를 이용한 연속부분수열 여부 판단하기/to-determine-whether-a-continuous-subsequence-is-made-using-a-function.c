#include <stdio.h>

int is_sub(int A[], int n1, int B[], int n2) { // B가 A의 연속부분수열인가?
    for (int i = 0; i <= n1 - n2; i++) {
        int k = 0;
        while (k < n2 && A[i + k] == B[k]) k++;
        if (k == n2) return 1;
    }
    return 0;
}

int main(void) {
    int n1, n2, A[100], B[100];

    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n2; i++) scanf("%d", &B[i]);

    printf(is_sub(A, n1, B, n2) ? "Yes" : "No");
    return 0;
}
