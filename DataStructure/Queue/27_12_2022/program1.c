// adding nodes in the linked list accoding to their priority

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    int priority;
    struct Node* next;
}nd;

nd* head = NULL;

nd* createNode(int data,int prio) {
    nd* newNode = (nd*)malloc(sizeof(nd));
    newNode->data = data;
    newNode->priority = prio;
    newNode->next = NULL;

    return newNode;
}

int addNode(int data,int prio) {
    nd* newNode = createNode(data,prio);
    if(head == NULL) {
        head = newNode;
    } else {
        nd* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return 0;
}

int countNode() {

        nd* temp = head;
        int count = 0;
        while(temp->next != NULL) {
            temp = temp->next;
            count++;
        }
        count++;

        return count;
}

int addFirst(int data,int prio) {
    nd* newNode = createNode(data,prio);
    if(head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }

}

int addAtPos(int pos,int data,int prio) {
    int count = countNode();
    if(pos <= 0 || pos > count +1) {
            printf("Invalid Position\n");
            return -1;
    }else {
        if(pos == 1) {
            addFirst(data,prio);
            return 0;
        } else if (pos == count+1) {
            addNode(data,prio);
            return 0;
        } else {
            nd* newNode = createNode(data,prio);
            nd* temp = head;
            while(pos-2) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;

            return 0;
        }
    }
}

int addSort(int data,int prio) {
    nd* newNode = createNode(data,prio);
    if(head == NULL) {
        head = newNode;
        return 0;
    } else {
        int flag = 0;
        int index = 1;
        nd* temp = head;
        while(temp != NULL) {
            if(prio > temp->priority) {
                addAtPos(index,data,prio);
                flag = 1;
                break;
            }
            index++;
            temp = temp->next;
        }
        if(flag == 0) {
            addNode(data,prio);
            return 0;
        }
         return 0;
    }
}

int printLL() {
    if(head == NULL) {
        printf("Linked list is empty\n");
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

int main() {

        int size;
        printf("enter no of nodes :\n");
        scanf("%d",&size);

        while(size) {
            int data,prio;
            printf("enter data :\n");
            scanf("%d",&data);
            printf("enter priority :\n");
            scanf("%d",&prio);

            if(prio <= 0 || prio > 5) {
                printf("Invalid Priority !! must be between 1-5\nenter again \n");
                scanf("%d",&prio);
            }

            addNode(data,prio);
            size--;
        }
        printLL();
}