#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void deleteAllOccurrences(struct Node** head, int key) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    while (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        temp = *head;
    }

    while (temp != NULL) {
        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) return;

        prev->next = temp->next;
        free(temp);
        temp = prev->next;
    }
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(20);
    head->next->next->next->next = createNode(40);
    head->next->next->next->next->next = createNode(20);

    deleteAllOccurrences(&head, 20);

    printList(head);

    return 0;
}
