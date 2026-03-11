#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to detect loop
int detectLoop(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL) {
        slow = slow->next;           // move 1 step
        fast = fast->next->next;     // move 2 steps

        if (slow == fast) {
            return 1; // Loop found
        }
    }

    return 0; // No loop
}

int main() {
    struct Node* head = createNode(3);
    head->next = createNode(2);
    head->next->next = createNode(0);
    head->next->next->next = createNode(-4);

    // Creating loop: last node points to second node
    head->next->next->next->next = head->next;

    if (detectLoop(head))
        printf("Loop detected\n");
    else
        printf("No loop detected\n");

    return 0;
}
