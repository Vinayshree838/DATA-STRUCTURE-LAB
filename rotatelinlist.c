
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head, int newData);
void rotate(struct Node** head, int k);
void printList(struct Node* head);

int main() {
    struct Node* head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printf("Original linked list: ");
    printList(head);
    printf("\n");

    int k = 2;
    rotate(&head, k);

    printf("Rotated linked list by %d positions: ", k);
    printList(head);
    printf("\n");

    return 0;
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void push(struct Node** head, int newData) {
    struct Node* newNode = createNode(newData);
    newNode->next = *head;
    *head = newNode;
}

void rotate(struct Node** head, int k) {
    if (k == 0)
        return;
    struct Node* current = *head;
    int count = 1;
    while (count < k && current != NULL) {
        current = current->next;
        count++;
    }
    if (current == NULL)
        return;

    struct Node* newHead = current->next;
    current->next = NULL;
    current = newHead;
    while (current->next != NULL)
        current = current->next;

    current->next = *head;
    *head = newHead;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
