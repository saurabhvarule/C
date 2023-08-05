#include<stdio.h>
#include<stdlib.h>
struct Node {
    char name[20];
    struct Node* next;
};

// create node funtion
struct Node* createNode() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("enter name :\n");
    char ch;
    int i = 0;
    while((ch = getchar()) != '\n') {
        newNode->name[i] = ch;
        i++;
    }
    newNode->name[i] = '\0';
    newNode->next = NULL;

    printf("Added Successfully\n");

    return newNode;
}

// head pointer
struct Node* head = NULL;

// add node funtion
int addNode() {
    struct Node* newNode = createNode();
    if(head == NULL) {
        head = newNode;
        
        return 0;
    } else {
        struct Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        
        return 0;
    }
}

int reverse() {
    if(head == NULL) {
        printf("linked list is empty\n");
        return -1;
    } else {
        struct Node* temp1 = NULL;
        struct Node* temp2 = head;
        while(head != NULL) {
            temp2 = head->next;
            head->next = temp1;
            temp1 = head;
            head = temp2;
        }
        head = temp1;

        return 0;
    }
}

// print data funtion
int printLL() {
    if(head == NULL) {
        printf("linked list is empty\n");
        return -1;
    } else {
        struct Node* temp = head;
        while(temp->next != NULL) {
            printf("| %s |->",temp->name);
            temp = temp->next;
        }
        printf("| %s |\n",temp->name);

        return 0;
    }
}
void main() {
    int size;
    printf("enter no of nodes :\n");
    scanf("%d",&size);
    getchar();
    
    while(size) {
        addNode();
        size--;
    }

    printLL();
    reverse();
    printLL();
}