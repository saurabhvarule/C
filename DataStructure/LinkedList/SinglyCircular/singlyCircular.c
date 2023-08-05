#include<stdio.h>
#include<stdlib.h>
typedef struct Demo {
    int data;
    struct Demo *next;
}dm;

dm *head = NULL;

// create node funtion
dm* createNode() {

    dm *newNode = (dm*) malloc(sizeof(dm));
    printf("Enter data :\n");
    scanf("%d",&newNode->data);
    newNode->next = NULL;

    return newNode;
}

// 1.add node function
void addNode() {

    dm* newNode = createNode();
    if(head == NULL) {
        head = newNode;
        newNode->next = head;    
    } else {
        dm *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        } 
        temp->next = newNode;
        newNode->next = head;
    }
}

// 2.count node function
int countNode() {
    
    dm* temp = head;
    int count = 0;
    if(head == NULL) {
        return 0;
    } else {
        while (temp->next != head) {
            temp = temp->next;
            count++;
        }
        count++;

        return count;
        
    }

}

// 3.print funtion
int printll() {

    if(head == NULL) {
        return -1;
    } else {
        dm *temp = head;
        while(temp->next != head) {
            printf("| %d |->",temp->data);
            temp = temp->next;
        }
        printf("| %d |\n",temp->data);

        return 0; 
    }
}

// 4.add first
int addFirst() {
    dm *newNode = createNode();
    if(head == NULL) {
        head = newNode;
        newNode->next = head;

        return 0;
    } else {
        newNode->next = head;
        dm *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        head = newNode;
        temp->next = head;

        return 0;
    }
}

// 5.add last
int addLast() {
    
    addNode();
    return 0;
}

// 6.add at position
int addAtPos(int pos) {
    int count = countNode();
    
    if(pos <=0 || pos > count+1) {
        return -1;
    } else if(pos == 1) {
        int res = addFirst();
        return res;

    }else if(pos == count +1) {
        int res = addLast();
        return res;
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

// 7.delete First
int deleteFirst() {
    if(head == NULL) {
        return -1;
    }else if(head->next == head) {
        free(head);
        head = NULL;

        return 0;
    } else {
        dm *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        head = head->next;
        free(temp->next);
        temp ->next = head;

        return 0;
    }
}

// 8.delete last
int deleteLast() {
    if(head == NULL) {
        return -1;
    }else if(head->next == head) {
        deleteFirst();
    } else {
        dm *temp = head;
        while(temp->next->next != head) {
            temp = temp->next;   
        }
        free(temp->next);
        temp->next = head;

        return 0;
    }
}

// 9.Delete at positon
int deleteAtPos(int pos) {
    int count = countNode();
    if(pos <= 0 || pos > count) {
        return -1;
    } else if(pos == 1) { 
        deleteFirst();
    } else if(pos == count) {
        deleteLast();
    } else {
        dm * temp1 = head;
        while(pos-2) {
            temp1 = temp1->next;
            pos--;
        }
        dm *temp2 = temp1->next;
        temp1->next = temp1->next->next;
        free(temp2);

        return 0; 
    }
}

// funtion to take positon
int takePos() {
    int pos;
    printf("enter position :\n");
    scanf("%d",&pos);
    
    return pos;
}

// Main function
int main () {
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
                        //printf("retval = %d",retVal);
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