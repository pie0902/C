#include <stdio.h>

// --- 함수 원형(Function Prototype) 선언 ---
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);

int main() {
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);
    printf("덧셈: %d\n", add(a, b));
    printf("뺄셈: %d\n", sub(a, b));
    printf("곱셈: %d\n", mul(a, b));
    printf("나눗셈: %d\n", divi(a, b));

    return 0;
}

// --- 함수 정의(Function Definition) ---
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divi(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}