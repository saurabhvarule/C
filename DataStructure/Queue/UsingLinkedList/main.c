#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}nd;

nd *front = NULL;
nd* rear = NULL;
int size;
int count = 0;
int flag = 0;

// create node
nd* createNode() {
    nd* newNode = (nd*)malloc(sizeof(nd));
    printf("Enter data :\n");
    scanf("%d",&newNode->data);

    newNode->next = NULL;

    return newNode;
}

// add Node
int addNode() {
    nd* newNode = createNode();
    if(front == NULL) {
        front = newNode;
        rear = newNode;
        count++;
        return 0;
    } else {
        rear->next = newNode;
        rear = newNode;
        count++;
        return 0;
    }
}

// is empty
int isEmpty() {
    if(front == NULL) {
        return -1;
    } else {
        return 0;
    }
} 

// is full
int isFull() {
    if(count == size) {
        return -1;
    } else {
        return 0;
    }
}

// nqueue
int nqueue() {
    if(isFull()) {
        flag = 0;
        return -1;
    } else {
        addNode();
        flag = 1;
        return 0;
    }
}

// dequeue
int dequeue() {
    if(isEmpty()) {
        flag = 0;
        return -1;
    } else {
        int ret = front->data;
        nd* temp = front;
        front = front->next;
        free(temp);
        temp = NULL;
        count--;
        flag = 1;

        return ret;
    }
}

// front
int frontt() {
    if(front == NULL) {
        flag = 0;
        return -1;
    } else {
        flag = 1;
        return front->data;
    }
}

// main funtion
int main() {

    printf("Enter size of  queue :\n");
    scanf("%d",&size);
    int queue[size];
    char choice;

    int ret;
    do {

        printf("1.nqueue\n");
        printf("2.dequeue\n");
        printf("3.front\n");
        printf("4.is full\n");
        printf("5.is empty\n");

        printf("Enter your option :\n");
        int opt;
        scanf("%d",&opt);

        switch(opt) {
            case 1 : {
                ret = nqueue(queue);
                if(ret == 0) {
                    printf("Added\n");
                } else {
                    printf("queue is overflow\n");
                }
                break;
            }
            case 2 : {
                ret = dequeue(queue);
                if(flag == 1) {
                    printf("%d is removed\n",ret);
                } else {
                    printf("queue is underflow\n");
                }
                break;
            }
            case 3 : {
                ret = frontt(queue);
                if(flag == 1) {
                    printf("%d\n",ret);
                } else {
                    printf("queue is empty\n");
                }
                break;
            }
            case 4 : {
                ret = isFull();
                if(ret == 0) {
                    printf("queue is not full\n");
                } else {
                    printf("queue is full\n");
                }
                break;
            }  
            case 5 : {
                ret = isEmpty();
                if(ret == 0) {
                    printf("Queue is not empty\n");
                } else {
                    printf("Queue is empty\n");
                }
                break;
            }
            
        }

        printf("Do you want to continue?[y/Y or n/N]\n");
        getchar();
        scanf("%c",&choice);

    } while(choice == 'y' || choice == 'Y');
    return 0;
}