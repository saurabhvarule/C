// singly linked list
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* head1 = NULL;
struct Node* head2 = NULL;

// create node funtion
struct Node* createNode() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("enter data :\n");
    scanf("%d",&newNode->data);
    printf("Added Successfully\n");
    newNode->next = NULL;

    return newNode;
}

// add node funtion;
void addNode(struct Node **head) {
    struct Node* newNode = createNode(); 
    if(*head == NULL) {
        *head = newNode;

    } else {
            struct Node* temp = *head;
            while(temp->next != NULL) {
                temp = temp->next;

            }
            temp->next = newNode;
    }
}

// print linked list funtion
int printLL(struct Node* head) {
    if(head == NULL) {
        printf("Linked list is empty\n");
        return -1;

    } else {
        struct Node* temp = head;
        while(temp->next != NULL) {
            printf("| %d |->",temp->data);
            temp = temp->next;
        }
        printf("| %d |\n",temp->data);
        
        return 0;
    }

}

int countNode(struct Node* temp) {
        if(temp == NULL) {
            return 0;
        } else {
            if(temp->next == NULL) {
                return 1;
            } else {
                int count = 0;
                while(temp->next != NULL){
                    count++;
                    temp = temp->next;    
                }
                count++;

                return count;
                
            }
        }
} 

// concat linked list function
int concat(struct Node* temp1,struct Node* temp2) {
    if(temp1 == NULL) {
            printf("linked list is empty\n");
            return -1;
    } else {
        while(temp1->next != NULL) {
            temp1 = temp1->next;
        }
        temp1->next = temp2;

        return 0;
    }
}

// nconcat linked list funtion
int nconcat(struct Node* temp1,struct Node* temp2) {
    int count = countNode(temp2);
    int length;
    printf("enter no of nodes to copy :\n");
    scanf("%d",&length);
    while(temp1->next != NULL) {
        temp1 = temp1->next;
    }

    if(length > count) {
        printf("limit exceeded than nodes or empty\n");
        return -1;
    } else if(length == count) {
        temp1->next = temp2;
        return 0;
    } else {
        count -= length;
        while(count) {
            temp2 = temp2->next;
            count--;
        }
        temp1->next = temp2;
        return 0;
    }
    
}
void main() {

    int size;
    printf("enter no of nodes in Linked list 1 :\n");
    scanf("%d",&size);

    while(size){
        addNode(&head1);
        size--;
    }
    
    printf("enter no of nodes in Linked list 2 :\n");
    scanf("%d",&size);

    while(size) {
        addNode(&head2);
        size--;
    }
    printLL(head1);
    printLL(head2);

    //call to concat funtion
    nconcat(head1,head2);
    printLL(head1);
}