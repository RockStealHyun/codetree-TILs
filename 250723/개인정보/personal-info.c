#include <stdio.h>
#include <string.h>

typedef struct {
    char  name[11];
    int   h;
    float w;
} Person;

void swap(Person *a, Person *b){
    Person t = *a; *a = *b; *b = t;
}

int main(void){
    Person a[5], b[5];
    for(int i=0;i<5;i++)
        scanf("%s %d %f", a[i].name, &a[i].h, &a[i].w);

    // 이름 오름차순
    for(int i=0;i<4;i++)
        for(int j=0;j<4-i;j++)
            if(strcmp(a[j].name, a[j+1].name) > 0)
                swap(&a[j], &a[j+1]);

    // 키 내림차순 (별도 배열)
    for(int i=0;i<5;i++) b[i]=a[i];   // 복사(원본 a를 써도 무방)
    for(int i=0;i<4;i++)
        for(int j=0;j<4-i;j++)
            if(b[j].h < b[j+1].h)
                swap(&b[j], &b[j+1]);

    printf("name\n");
    for(int i=0;i<5;i++)
        printf("%s %d %.1f\n", a[i].name, a[i].h, a[i].w);

    printf("\nheight\n");
    for(int i=0;i<5;i++)
        printf("%s %d %.1f\n", b[i].name, b[i].h, b[i].w);

    return 0;
}
