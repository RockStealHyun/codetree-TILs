#include <stdio.h>
#include <string.h>

int main() {
    char name1[50];
    char name2[50];

    scanf("%s %s", name1, name2);  // & 없어도 됨
    
    if(strlen(name1)==strlen(name2))
    printf("same");    

    else
        if(strlen(name1)>strlen(name2))
        printf("%s %d", name1,strlen(name1));
    
        else if(strlen(name1)< strlen(name2))
        printf("%s %d", name2,strlen(name2));        

    return 0;
}





