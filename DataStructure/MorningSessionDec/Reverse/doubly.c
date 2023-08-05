// in place reverse in doubly linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} nd;

nd *head = NULL;

nd *createNode()
{
    nd *newNode = (nd *)malloc(sizeof(nd));
    newNode->prev = NULL;
    printf("enter data:\n");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    return newNode;
}

int addNode()
{
    nd *newNode = createNode();
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        nd *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
    }

    printf("Added Successfully!\n");
    return 0;
}
int revDLL() {
    nd* temp = NULL;
    if(head == NULL) {
        printf("linked list is empty\n");
        return -1;
    } else {
        while(head != NULL) {
            head->prev = head->next;
            head->next = temp;
            head = head->prev;
            if(head != NULL) {
                temp = head->prev;
            } 
        }
        head = temp->prev;
        
        return 0;
    }
}

int printDLL() {
    if(head == NULL) {
        printf("linked listi is empty\n");
        return -1;
    } else {
        nd* temp = head;
        while(temp->next != NULL) {
            printf("| %d |->",temp->data);
            temp = temp->next;
        }
        printf("| %d |\n",temp->data);

        return 0;
    }
}
void main()
{
    int size;
    printf("enter no of nodes :\n");
    scanf("%d",&size);

    while(size) {
        addNode();
        size--;
    }
    printf("Before reverse :\n");
    printDLL();
    revDLL();
    printf("After reverse :\n");
    printDLL();
}