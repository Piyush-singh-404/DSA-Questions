#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to find the middle node (second middle if even length)
struct Node* findMiddle(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Function to print the linked list from a given node
void printList(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    if(n == 0) return 0;

    int val;
    scanf("%d", &val);
    struct Node* head = createNode(val);
    struct Node* temp = head;

    for(int i = 1; i < n; i++) {
        scanf("%d", &val);
        temp->next = createNode(val);
        temp = temp->next;
    }

    struct Node* middle = findMiddle(head);
    printList(middle);

    return 0;
}
