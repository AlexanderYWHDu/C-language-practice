#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *new_node(int data) {
    Node *n = malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;
    return n;
}

void prepend(Node **head, int data) {
    Node *n = new_node(data);
    n->next = *head;
    *head = n;
}

void append(Node *n, int data){
    Node *dummy = n;
    while(dummy->next != NULL){
        dummy = dummy->next;
    }
    dummy->next = new_node(data);
}

Node *delete_node(Node *head, int data){
    Node dummy_node;
    dummy_node.next = head;
    Node *dummy = &dummy_node;
    while(dummy->next != NULL){
        if (dummy->next->data == data)
            dummy->next = dummy->next->next;
        else
            dummy = dummy->next;
    }
    return dummy_node.next;
}

void print(Node *head) {
    Node *p = head;
    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void free_list(Node *head) {
    while (head != NULL) {
        Node *tmp = head->next;
        free(head);
        head = tmp;
    }
}

int main() {
    Node *head = NULL;

    prepend(&head, 30);
    prepend(&head, 20);
    prepend(&head, 10);
    append(head, 40);
    head = delete_node(head, 20);
    print(head);   // 10 -> 20 -> 30 -> NULL
    
    free_list(head);
    return 0;
}