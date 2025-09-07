#include <stdio.h>
#include <stdlib.h>

/**
 * @struct Node
 * @brief 연결 리스트의 노드를 정의하는 구조체입니다.
 * * 각 노드는 정수 데이터를 저장하며, 다음 노드를 가리키는 포인터를 가집니다.
 */
struct Node {
    int val;
    struct Node *next;
};

// 함수 원형 선언
// main 함수보다 먼저 선언되어 컴파일러가 함수의 존재를 미리 알 수 있게 합니다.
void add_node(struct Node **head, int val);
void free_list(struct Node *head);

/**
 * @brief 연결 리스트에 새로운 노드를 맨 앞에 추가합니다.
 * @param head 리스트의 헤드(시작) 포인터에 대한 포인터입니다.
 * @param val 새로 추가할 노드의 데이터 값입니다.
 */
void add_node(struct Node **head, int val) {
    // 새로운 노드를 동적으로 할당합니다.
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("메모리 할당 실패\n");
        return;
    }
    
    // 새 노드의 값과 다음 노드 포인터를 설정합니다.
    new_node->val = val;
    new_node->next = *head; // 새 노드의 다음이 현재 헤드가 가리키는 노드를 가리키게 함
    
    // 헤드 포인터가 새 노드를 가리키도록 업데이트합니다.
    *head = new_node;
}

/**
 * @brief 연결 리스트의 모든 노드를 순서대로 출력합니다.
 * @param head 리스트의 헤드 포인터입니다.
 */
void print_list(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}

/**
 * @brief 연결 리스트에 할당된 모든 메모리를 해제합니다.
 * @param head 리스트의 헤드 포인터입니다.
 */
void free_list(struct Node *head) {
    struct Node *current = head;
    struct Node *next_node;
    
    while (current != NULL) {
        next_node = current->next; // 다음 노드의 주소를 미리 저장
        free(current); // 현재 노드의 메모리 해제
        current = next_node; // 다음 노드로 이동
    }
    printf("모든 메모리가 성공적으로 해제되었습니다.\n");
}

int main() {
    // 리스트의 첫 번째 노드를 가리키는 포인터
    // 초기에는 아무것도 없으니 NULL로 시작
    struct Node *head = NULL; 

    // 예시: 노드 3개 추가 (10, 20, 30)
    add_node(&head, 10);
    add_node(&head, 20);
    add_node(&head, 30);

    // 리스트 전체를 출력합니다.
    printf("리스트 내용: ");
    print_list(head);
    
    // 모든 노드 메모리를 해제합니다.
    free_list(head);

    return 0;
}
