#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;
    printf("행 %d, 열 %d 크기의 2차원 배열을 동적 할당합니다.\n", rows, cols);

    // 1차원: int* 들을 담을 배열 할당
    int **matrix = malloc(rows * sizeof(int*));
    printf("matrix (int**) 할당 완료, 주소: %p\n", (void*)matrix);

    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
        printf("matrix[%d] (int*) 할당 완료, 주소: %p\n", i, (void*)matrix[i]);
    }

    // 값 넣기
    printf("\n값 대입 시작...\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j;  // 예: 순차 숫자 채움
            printf("matrix[%d][%d] = %d (주소: %p)\n", 
                   i, j, matrix[i][j], (void*)&matrix[i][j]);
        }
    }

    // 특정 값 출력
    printf("\n특정 값 확인: matrix[1][2] = %d\n", matrix[1][2]);

    // 해제
    printf("\n메모리 해제 시작...\n");
    for (int i = 0; i < rows; i++) {
        printf("free(matrix[%d]) → 주소: %p\n", i, (void*)matrix[i]);
        free(matrix[i]);
    }
    printf("free(matrix) → 주소: %p\n", (void*)matrix);
    free(matrix);

    return 0;
}
