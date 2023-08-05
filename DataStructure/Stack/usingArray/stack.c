#include<stdio.h>

int *ptr;
int size;
int top = -1;
// 1.push in stack 
int push(int data) {
    
    top++;
    if(top <= size-1) {
        *(ptr + top) = data;
        printf("Added Successfully\n");
        
        return 0;
    }

    printf("stack overflow\n");

    return -1;
}

int printStack() {
    if(top == -1 || top >= size) {
        return -1;
    
    } else {
        
        for(int i = top; i >= 0; i--) {
            
            printf("| %d |\n",*(ptr + i));
        }
    }

}

int enterData() {

    int data;
    printf("Enter data\n");
    scanf("%d",&data);

    return data;

}

void main() {

    int retVal;
    printf("Enter size of stack :\n");
    scanf("%d",&size);
    int stack[size];
    ptr = stack;
    
    int i = size;
    while(i) {
        push(enterData());
        i--;
    }
    //push(enterData());
    printStack();
}