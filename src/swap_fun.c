#include <stdio.h>

// TODO: swap() 함수를 여기에 만들어보세요
// 힌트: 값의 주소를 받아서 그 주소에 있는 값을 바꿔야 합니다.

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10;
    int b = 20;

    printf("교환 전: a = %d, b = %d\n", a, b);

    swap(&a, &b); 

    printf("교환 후: a = %d, b = %d\n", a, b);

    return 0;


}
