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

// Merge two sorted linked lists
struct Node* mergeLists(struct Node* l1, struct Node* l2) {
    if(!l1) return l2;
    if(!l2) return l1;

    struct Node* head = NULL;
    struct Node* tail = NULL;

    if(l1->data < l2->data) {
        head = tail = l1;
        l1 = l1->next;
    } else {
        head = tail = l2;
        l2 = l2->next;
    }

    while(l1 && l2) {
        if(l1->data < l2->data) {
            tail->next = l1;
            tail = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            tail = l2;
            l2 = l2->next;
        }
    }

    if(l1) tail->next = l1;
    if(l2) tail->next = l2;

    return head;
}

// Print linked list
void printList(struct Node* head) {
    while(head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    int n1, n2;
    scanf("%d", &n1);

    struct Node* list1 = NULL;
    struct Node* temp = NULL;
    int val;

    if(n1 > 0) {
        scanf("%d", &val);
        list1 = createNode(val);
        temp = list1;
        for(int i=1; i<n1; i++) {
            scanf("%d", &val);
            temp->next = createNode(val);
            temp = temp->next;
        }
    }

    scanf("%d", &n2);
    struct Node* list2 = NULL;
    temp = NULL;

    if(n2 > 0) {
        scanf("%d", &val);
        list2 = createNode(val);
        temp = list2;
        for(int i=1; i<n2; i++) {
            scanf("%d", &val);
            temp->next = createNode(val);
            temp = temp->next;
        }
    }

    struct Node* merged = mergeLists(list1, list2);
    printList(merged);

    return 0;
}
