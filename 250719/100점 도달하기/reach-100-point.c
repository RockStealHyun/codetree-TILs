#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);  
    
    for(int i = N; i < 101; i++){
        if(i<60){
            printf("F ");
        }
        else if(i>=60&&i<70){
            printf("D ");
        }
        else if(i>=70&&i<80){
            printf("C ");
        }
        else if(i>=80&&i<90){
            printf("B ");
        }
        else if(i>=90&&i<101){
            printf("A ");
        }


    }
}



