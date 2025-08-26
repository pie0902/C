#include<stdio.h>

int main(){
    int x = 100;
    int *p = &x; // p는 x의 주소를 가리킨다.
    int **pp = &p; // pp 는 p의 주소를 가리킨다.

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
    printf("주소 p = %p\n", (void*)p);
    printf("주소 pp = %p\n", (void*)pp);
    return 0;
}


