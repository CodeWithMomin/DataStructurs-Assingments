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

void findMinMax(struct Node* head, int* min, int* max) {
    if (head == NULL) return;
    *min = *max = head->data;
    while (head != NULL) {
        if (head->data < *min) *min = head->data;
        if (head->data > *max) *max = head->data;
        head = head->next;
    }
}

int main() {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(5);
    head->next->next->next = createNode(15);

    int min, max;
    findMinMax(head, &min, &max);

    printf("Smallest: %d\n", min);
    printf("Biggest: %d\n", max);

    return 0;
}
