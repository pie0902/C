#include <stdio.h>
#include <stdlib.h>

/**
 * @struct Node
 * @brief 연결 리스트의 노드를 정의하는 구조체입니다.
 * * 각 노드는 정수 데이터를 저장하며, 다음 노드를 가리키는 포인터를 가집니다.
 * * typedef를 사용하여 'Node'라는 단순한 이름으로 사용할 수 있습니다.
 */
typedef struct Node {
    int val;
    struct Node *next;
} Node;
void add_list(Node **head,int val);
void free_list(Node *head);

int main(){
    Node *head = NULL;
    add_list(&head, 10);
    add_list(&head, 20);
    add_list(&head, 30);
    Node *cur = head;
    while(cur != NULL){
        printf("%d -> ", cur->val);
        cur = cur->next;
    }
    free_list(head);
    return 0;
}


void add_list(Node **head,int val){
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

void free_list(Node *head){
    Node *current = head;
    Node *next_node;
    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
}


