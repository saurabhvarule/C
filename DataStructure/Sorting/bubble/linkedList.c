#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;

}nd;

nd* head = NULL;
nd* last = NULL;
int count = 0;

nd* createNode() {
    nd* newNode = (nd*)malloc(sizeof(nd));
    printf("enter data \n");
    scanf("%d",&newNode->data);
    newNode->next = NULL;
    count++;

    return newNode;
}

int addNode() {
    nd* newNode = createNode();
    if(head == NULL) {
        head = newNode;
        last = newNode;
    }
    last->next = newNode;
    last = newNode;
}

void sort() {
    nd* temp = head;
    int j=0;
    for(int i=0; i<count-1;) {
        if(j<count-i-1) {
            if(temp->data > temp->next->data) {
                int temp2 = temp->data;
                temp->data = temp->next->data;
                temp->next->data = temp2;
            }
            temp = temp->next;
            j++;
            continue;;
        }
        temp = head;
        j = 0;
        i++;

    } 
} 

void sortWithoutCount() {
    nd* temp1 = head;
    while(temp1->next->next != NULL) {
        while(temp->next!=NULL)
    }
}

int printData() {
    if(head == NULL) {
        return -1;
    }
    nd* temp = head;
    while(temp->next != NULL) {
        printf("| %d |->",temp->data);
        temp = temp->next;
    }
    printf("| %d |\n",temp->data);

    return 0;
}
int main () {

    int size = 5;
    while(size) {
        addNode();
        size--;
    }
    printData();
    sort();
    printData();

}