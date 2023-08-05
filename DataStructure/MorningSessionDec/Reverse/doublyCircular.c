// Reverse doubly linked list program :

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    struct Node* prev;
    int data;
    struct Node* next;
}nd;

nd* head = NULL; // head pointer -->> to the first node of the linked list (initiallly null).
nd* last = NULL; // last pointer -->> to the last node of the linked list (initially null).
int count = 0; // to keep count on the nodes of linked list

// create node function
nd* createNode() {
    nd* newNode = (nd*)malloc(sizeof(nd));
    printf("Enter data :\n");
    newNode->prev = NULL;
    scanf("%d",&newNode->data);
    newNode->next = NULL;

    return newNode;
}

// add Node function
int addNode() {
    nd* newNode = createNode();

    if(head == NULL) {
        head = newNode;
        head->prev = newNode;
        head->next = newNode;
        last = head;
        count ++;
        
        return 0;
    } else {

        last->next = newNode;
        newNode->prev = last;
        newNode->next = head;
        head->prev = newNode;
        last = newNode;
        count++;

        return 0;

    }
}

// print linked list function
int printLL() {
    if(head == NULL) {
        printf("linked list is empty\n");
        return -1;
    } else {
        nd *temp = head;
        while(temp->next != head) {
            printf("| %d |->",temp->data);
            temp = temp->next;
        }
        printf("| %d |\n",temp->data);

        return 0;
    }
}

// reverse doubly linked list function
int reverse() {
    if(head == NULL) {
        return -1;
    } else {
        nd* temp1 = NULL;
        nd* temp2 = head;

        while(temp2->next != head) {
            temp2->prev = temp2->next;
            temp2->next = temp1;
            temp1 = temp2;
            temp2 = temp2->prev;
        }
        temp2->next = temp1;
        temp2->prev = head;
        head->next = temp2;
        head = temp2;

        return 0;
    }
}

// main funtion
int main() {
    int s;
    printf("How many nodes do you want?\n");
    scanf("%d",&s);
    while(s) {
        addNode();
        printf("Added\n");
        s--;
    }
    
    //printing linked list
    printLL();
    
    // call to reverse funtion
    reverse();

    // printing linked list
    printLL();

    return 0;
}