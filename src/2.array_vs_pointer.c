#include<stdio.h>

int arr[5] = {10,20,30,40,50};
int *p = arr;
int main(){
    for(int i = 0; i<5; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("--------------------------\n");
    for(int i = 0; i<5; i++){
        printf("포인터 p로 출력한 arr[%d] = %d\n", i , *(p+i));
    }
}