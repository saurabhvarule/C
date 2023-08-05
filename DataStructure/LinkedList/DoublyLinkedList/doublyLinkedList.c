#include<stdio.h>
#include<stdlib.h>

typedef struct Demo {
    struct Demo *prev;
    int data;
    struct Demo *next;
    
}dm;

dm *head = NULL;

// 1.create node function
dm* createNode() {
    
    dm *newNode = (dm*)malloc(sizeof(dm));

    printf("enter data:\n");
    scanf("%d",&newNode->data);
     newNode->prev = NULL;
     newNode->next = NULL;

     return newNode;

}


// 2.addNode function
int addNode() {
    
    dm *newNode = createNode();
    if(head == NULL) {
        head = newNode;
    } else {
        dm *temp = head;
        while(temp->next != NULL) {

                temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
    }

    return 0;
}

// 3.print doubly linked list funtion

int printdll() {

    if(head == NULL) {
        return -1;
    }
    dm *temp = head;
    while(temp->next != NULL) {

        printf("| %d |->",temp->data);
        temp = temp->next;
    }
    printf("| %d |\n",temp->data);

    return 0;
}

// 4. count node function
int countNode() {
    
    if(head == NULL) {
        
        return 0;

    }else if(head->next == NULL) {
        
        return 1;

    } else {
        
        dm *temp = head;
        int count = 0;
        
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        return count;
    }
}

// 5. Add first to linked list
int addFirst() {
    
    dm *newNode = createNode();
    if(head == NULL) {
            head = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    
    return 0;
}

// 6. add Last to the linked list
int addLast() { 

    addNode();
}

// 7. add at position

int addAtPos(int pos) {

    int count = countNode();
    
    if(pos <= 0 || pos > count+1) {
        
        return -1;

    } else {
        if(pos == 1) {
            
            addFirst();

        } else if(pos == count+1) {
            
            addLast();

        } else {

            dm *newNode = createNode();
            dm *temp = head;
            while(pos-2) {

                    temp = temp->next;
                    pos--;
            }
            newNode->next = temp->next;
            temp->next = newNode;

            return 0;
        }
    }
}

// 8.Delete first in linked list

int deleteFirst() {

    if(head == NULL) {
        
        return -1;

    } else if(head->next == NULL) {
        
        free(head);
        head = NULL;

    } else {

        head = head->next;
        free(head->prev);
        head->prev = NULL;
    }

        return 0;
}

// 9.Delete last node in linked list
int deleteLast() {

    if(head == NULL) {

        return -1;

    } else if (head->next == NULL) {

        free(head);
        head = NULL;
    } else {
        
        dm *temp = head;
        while(temp->next->next != NULL) {

            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }

    return 0;
    
}

// 10. Delete at position
 int deleteAtPos(int pos) {

    int count = countNode();
    if(pos <= 0 || pos > count) {

        return -1;

    } else {
        if(pos == 1) {

            deleteFirst();

        } else if (pos == count) {

            deleteLast();

        } else {

                dm *temp = head;
                while(pos-2) {

                    temp= temp->next;
                    pos--;
                }
                temp->next = temp->next->next;
                free(temp->next->prev);
                temp->next->prev = temp;

                return 0;
        }
    }
 }

int takePos() {
     int pos;
    printf("Enter Position\n");
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
                        retVal = printdll();
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