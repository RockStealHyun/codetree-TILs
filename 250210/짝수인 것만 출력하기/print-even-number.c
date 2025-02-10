#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    int arr[100];
  	int new_arr[100];
  	int cnt = 0;


    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
    	if(arr[i] % 2 == 0)
        	new_arr[cnt++] = arr[i];

    for(int i = 0; i < cnt; i++)
    	printf("%d ", new_arr[i]);

    return 0;
}

