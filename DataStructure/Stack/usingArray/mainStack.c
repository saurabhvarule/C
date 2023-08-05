#include<stdio.h>

int size;
int top = -1;
int flag = 0;

int isEmpty() {
    if(top == -1){
        return -1;
    } else {
        return 0;
    }
}

int isFull() {
    if(top == size-1) {
        return -1;
    } else {
        return 0;
    }
}

int push(int stack[]) {
    if(isFull()) {
        return -1;

    } else {
        top++;
        printf("Enter data:\n");
        scanf("%d",&stack[top]);

        return 0;
    }

}

int peek(int stack[]) {
    if(isEmpty()) {
        flag = 0;
        return -1;
    } else {
        flag = 1;
        return stack[top];
    }
}

int pop(int stack[]) {
    if(isEmpty()) {
        flag = 0;
        return -1;
    } else {
        int ret = stack[top];
        top--;
        flag = 1;
         return ret;
    }
}
void main() {
    printf("enter size of stack :\n");
    scanf("%d",&size);
    int stack[size];
    
    int ret;
    char choice;
    do {

        printf("1.Push\n");
        printf("2.Peek\n");
        printf("3.Pop\n");
        printf("4.is Full\n");
        printf("5.is Empty\n");

        printf("enter your option\n");
        int opt;
        scanf("%d",&opt);

        switch(opt) {
            case 1 :{
                ret = push(stack);
                if(ret == -1)
                    printf("Stack Overloaded\n");
                else
                    printf("Added\n");

                break;
            }

            case 2 : {
                ret  = peek(stack);
                if(flag == 0)
                    printf("Stack is empty\n");
                else
                    printf("%d\n",ret);
                
                break;
            }

            case 3 : {
                ret = pop(stack);
                if(flag == 0)
                    printf("Stack underflow\n");
                else
                    printf("%d is poped\n",ret);
                
                break;
            }

            case 4 : {
                ret = isFull();
                if(ret == -1) 
                    printf("Stack is full\n");
                else
                    printf("stack is not full\n");
                
                break;
            }

            case 5 : {
                ret = isEmpty();
                if(ret == -1)
                    printf("stack is empty\n");
                else    
                    printf("Stack is not empty\n");
                
                break;
            }

            default :
                printf("Wrong Choice\n");  
                break;
        }

        printf("Do you want yo continue?[y/Y or n/N]\n");
        getchar();
        scanf("%c",&choice);

    } while(choice == 'y' || choice == 'Y');
}