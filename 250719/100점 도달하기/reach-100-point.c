#include <stdio.h>


int main() {
    int N;
    scanf("%d", N);  
    
    for(int i = N; i < 101; i++){
        if(N<60){
            printf("F");
        }
        else if(N>=60&&N<70){
            printf("D");
        }
        else if(N>=70&&N<80){
            printf("C");
        }
        else if(N>=80&&N<90){
            printf("B");
        }
        else if(N>=90&&N<101){
            printf("A");
        }


    }
}



