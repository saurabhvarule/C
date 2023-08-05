#include<stdio.h>
#include<stdlib.h>


typedef struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
}nd;

nd *head = NULL;

// 1.create node in doubly circular
nd *createNode() {
    nd *newNode = (nd*)malloc(sizeof(nd));
    printf("enter data:\n");
    scanf("%d",&newNode->data);
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

// 2.add node in doubly circular
void addNode() {

    nd *newNode = createNode();
    if(head == NULL) {
        head = newNode;
        head->prev = head;
        head->next = head;
    } else {
        nd *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = head;
        head->prev = newNode;

    }
    
}

// 3.print nodes  in doubly circular
int printll() {
    if(head == NULL) {
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

// 4.add first in doubly circular
void  addFirst() {
    nd *newNode = createNode();
    if(head == NULL) {
        head = newNode;
        head->prev = head;
        head->next = head;
    } else {
        newNode->prev = head->prev;
        newNode->next = head;
        head->prev->next = newNode;
        head  = newNode;
    }
}

// 5.add last in doubly circular
int addLast() {
    addNode();
    return 0;
}
// 6.count nodes in doubly circular
int countNode() {
    if(head == NULL) {
        return 0;
    } else if(head->next == head) {
        return 1;
    } else {
        int count = 0;
        nd *temp = head;
        while(temp->next != head) {
            count++;
            temp = temp->next;
        }
        count++;

        return count;
    }
}

// 7.add at position in doubly circular
int addAtPos(int pos) {
    int count = countNode();
    if(pos <= 0 || pos > count+1) {
        return -1;
    } else {
        if(pos == 1) {
            addFirst();
        } else if(pos == count +1) {
            addLast();
        } else {
            nd *newNode = createNode();
            nd *temp = head;
            while(pos-2) {
                temp = temp->next;
                pos--;
            }
            newNode->prev = temp;
            newNode->next = temp->next;
            temp->next->prev = newNode;
            temp->next = newNode; 

            return 0;
        }
    }

}

// 8.delete first node in doubly circular
int deleteFirst() {
    if(head == NULL) {
        return -1;

    } else if(head->next == head) {
        free(head);
        head = NULL;
    } else {
        head = head->next;
        head->prev = head->prev->prev;
        free(head->prev->next);
        head->prev->next = head;
    }

    return 0;
}

// 9.delete last node in doubly circular
int deleteLast() {
    if(head == NULL) {
        return -1;
    } else if(head->next == head) {
        free(head);
        head = NULL;
    } else {
        head->prev = head->prev->prev;
        free(head->prev->next);
        head->prev->next = head;
    }
}

// 10.delete last node in doubly circular
int deleteAtPos(int pos) {
    int count = countNode();
    if(pos<= 0 || pos > count) {
        return -1;
    } else {
        if(pos == 1) {
            deleteFirst();

        } else if(pos == count) {
            deleteLast();

        } else {
            nd *temp = head;
            while(pos-2) {
                temp = temp->next;
                pos--;
            }
            temp->next = temp->next->next;
            free(temp->next->prev);
            temp->next->prev = temp;

            return 0;
        }
    }
}
// funtion to take positon
int takePos() {
    int pos;
    printf("enter position :\n");
    scanf("%d",&pos);
    
    return pos;
}
void main() {
     char choice;
    do {
        
        int option;
        int retVal;
        char tryAgain;
    
        printf("1.Add Node\n");
        printf("2.Print linked list\n");
        printf("3.Count of nodes\n");
        printf("4.Add first\n");
        printf("5.Add last\n");
        printf("6.Add at position\n");
        printf("7.Delete first\n");
        printf("8.Delete last\n");
        printf("9.Delete at position\n");
        printf("10.Exit\n");

        printf("Enter your option\n");
        scanf("%d",&option);
        switch(option) {

                case 1 :
                    {                
                        addNode();
                        printf("Added Successfully\n");
                        break;
                    }

                 case 2 :
                    {                
                        retVal = printll();
                        if(retVal == -1) {
                         
                            printf("Linked List Is Empty !!\n");
                        }
                        break;
                    }

                case 3 :
                    {                
                        int count = countNode();
                        printf("%d\n",count);

                        break;
                    }

                 case 4 :
                    {                
                        addFirst();
                        printf("Added Successfully\n");
                        
                        break;
                    }

                case 5 :
                    {                
                        addLast(); 
                        printf("Added Successfully\n");
                        
                        break;
                    }

                case 6 :
                    {          
                       
                        retVal = addAtPos(takePos());
                        if(retVal == 0) { 
                            
                            printf("Added Successfully\n");

                        } else {

                            printf("Invalid Position\n");
                            printf("Do you want to try again?[Y/y]\n");
                            getchar();
                            scanf("%c",&tryAgain);

                            if(tryAgain == 'y' || tryAgain == 'Y') {
                                
                                addAtPos(takePos());
                            }
                        }
                        
                        break;
                    }

                    case 7 :
                    {                
                        retVal = deleteFirst();
                            if(retVal == 0) {
                                
                                printf("Delteted Successfully\n");

                            }else {

                                printf("Linked List Is Empty\n");

                            }
                        
                        break;
                    }

                    case 8 :
                    {                
                        retVal = deleteLast();
                            if(retVal == 0) {
                                
                                printf("Delteted Successfully\n");
                                
                            }else {

                                printf("Linked List Is Empty\n");

                            }
                        
                        break;
                    }

                    case 9 :
                    {          
                       
                        retVal = deleteAtPos(takePos());
                        
                        if(retVal == 0) { 
                            
                            printf("Deleted Successfully\n");

                        } else {

                            printf("Invalid Position\n");
                            printf("Do you want to try again?[Y/y]\n");
                            getchar();
                            scanf("%c",&tryAgain);

                            if(tryAgain == 'y' || tryAgain == 'Y') {
                                
                                deleteAtPos(takePos());
                            }
                        }
                        
                        break;
                    }

                    case 10:
                        break;

                    default:
                        printf("Wrong Choice\n");    
        }

        printf("Do you want to continue?[Y/y]\n");
        getchar();
        scanf("%c",&choice);

    }while(choice == 'y' || choice == 'Y');

}