#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// head pointer
struct Node* head = NULL;

// create node funtion
struct Node* createNode() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("enter data :\n");
    scanf("%d",&newNode->data);
    newNode->next = NULL;

    return newNode;
}

// add node funtion
int addNode() {
    struct Node* newNode = createNode();
    if(head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        struct Node* temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    printf("Added Successfully\n");
    return 0;
}

// reverse singly circular funntion
int reverse() {
    struct Node* temp1 = NULL;
    struct Node* temp2 = NULL;
    struct Node* temp3 = head;
    while(temp2 != head) {
        temp2 = temp3->next;
        temp3->next = temp1;
        temp1 = temp3;
        temp3 = temp2;
    }
    head->next = temp1;
    head = temp1;
}

// print singly circular linked list funtion
int printSCLL() {
    if(head == NULL) {
        printf("linked list is empty\n");

        return -1;
    } else {
        struct Node* temp = head;
        while(temp->next != head) {
            printf("| %d |->",temp->data);
            temp = temp->next;
        }
        printf("| %d |\n",temp->data);


    }
}
void main() {
    int size;
    printf("enter no of nodes :\n");
    scanf("%d",&size);
   
    while(size) {
        addNode();
        size--;
    }

    printSCLL();
    reverse();
    printSCLL();
}