#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int size;
int flag = 0;
struct Node* top = NULL;
struct Node* head = NULL;
int count = 0;

// create Node
struct Node* createNode() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data :\n");
    scanf("%d",&newNode->data);
    newNode->next = NULL;
    count++;

    return newNode;
}

// addNode
int addNode() {
    struct Node* newNode = createNode();
    if(head == NULL) {
        head = newNode;
        top = head;
    } else {    
        top->next = newNode;
        top = newNode;
    }
}

// isfull
int isFull() {
    if(count == size) {
        return -1;
    } else {
        return 0;
    }
}

// isEmpty
int isEmpty() {
    if(count == 0) {
        return -1;
    } else {
        return 0;
    }
}

// push
int push() {
    if(isFull()) {
        flag = 0;
        return -1;
    } else {
        addNode();
        flag = 1;
        return 0;
    }
}

// peek
int peek() {
    if(isEmpty()) {
        flag = 0;
        return -1;
    } else {
        flag = 1;
        return top->data;
    }
}

// pop
int pop() {
    int ret;
    if(isEmpty()) {
        flag = 0;
        return -1;
    } else if(head->next == NULL) {
        ret = head->data;
        free(head);
        head = NULL;
        top  = head;
        count--;
        flag = 1;
        
        return ret;
    } else {
        struct Node* temp = head;
        while(temp->next->next != NULL) {

                temp =  temp->next;
        }
        ret = temp->next->data;
        free(temp->next);
        temp->next = NULL;
        count--;
        flag = 1;
        top = temp;

        return ret;
    }
}
int main() {
    
    int retVal;
    char choice;
    
    printf("Enter size of stack :\n");
    scanf("%d",&size);

    do {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.is full\n");
        printf("5.is empty\n");

        printf("enter tour option\n");
        int opt;
        scanf("%d",&opt);

        switch(opt) {
            case 1 : {
                retVal = push();
                if(retVal == 0)
                    printf("Added\n");
                else
                    printf("Stack overflow\n");

                break;
            }

            case 2 : {
                retVal = pop();
                printf("%d = pop result\n",retVal);
                if(flag == 0) {
                    printf("stack is empty\n");
                } else {
                    printf("%d is poped\n",retVal);
                }
                break;
            }

            case 3 : {
                retVal = peek();
                if(flag == 0) {
                    printf("Stack is empty\n");
                } else {
                    printf("%d\n",retVal);
                }
                break;
            }

            case 4 : {
                retVal = isFull();
                if(retVal == -1) {
                    printf("Stack is full\n");
                } else {
                    printf("Stack is not full\n");
                }

                break;
            }

            case 5 : {
                retVal = isEmpty();
                if(retVal == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack is not empty\n");
                }

                break;
            }
            
            default :
                printf("Wrong choice !\n");
                break;

        }
        printf("Do you want to comitnue? [y/Y or n/N]\n");
        getchar();
        scanf("%c",&choice);

    } while(choice == 'y' || choice == 'Y');

    return 0;
}