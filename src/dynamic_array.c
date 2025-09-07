#include <stdio.h>
#include <stdlib.h> // malloc(), free() 함수를 사용하려면 이 헤더가 필요함

int main() {
    int size;

    printf("몇 개의 숫자를 저장할까요? ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    // TODO: malloc을 사용해서 size 크기의 정수 배열을 동적으로 할당하세요
    
    printf("숫자를 %d개 입력하세요:\n", size);
    // TODO: 반복문을 사용해서 배열에 값을 입력받아 저장하세요
    for(int i = 0; i < size; i++){
        printf("숫자 %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("입력된 숫자들은 다음과 같습니다:\n");
    // TODO: 반복문을 사용해서 배열의 모든 값을 출력하세요
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    // TODO: free()를 사용해서 할당된 메모리를 해제하세요

    return 0;
}