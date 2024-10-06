#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i;
    

    for(i=1;i<=n;i++)
    {
        int div=n/i;
        n=div;
        if(n<=1)
        {
            break;
        }
    }
     printf("%d\n",i);
    // 여기에 코드를 작성해주세요.
    return 0;
}