
#include<stdio.h>
#include<stdlib.h>

typedef struct Demo {

	int data;
	struct Demo *next;
}dm;

dm *head = NULL;

//1 createNode function
dm* createNode() {

	dm *newNode = (dm*)malloc(sizeof(dm));
	printf("enter data :\n");
	scanf("%d",&newNode->data);
	newNode -> next = NULL;
}

//2 addNode function
void addNode() {
	dm *newNode = createNode();
	
	if(head == NULL) {
		head = newNode;
	} else {
		dm *temp = head;
		while(temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = newNode;
	}
}

//3 printll function
void printll() {

	dm *temp = head;
	while(temp != NULL) {

		printf("->| %d |",temp -> data );
		temp = temp -> next;
	}
	printf("\n");
}

//4 addFirst function
void addFirst() {

	dm *newNode = createNode();

	if(head == NULL) {

		head = newNode;
	} else {

		dm *temp = head;
		head = newNode;
		head -> next = temp;
	}
}


//5 addLast funtion
void addLast() {

	addNode();
}

//6 count funtion
int count() {

	dm *temp = head;
	int count = 0;
	while(temp != NULL) {

		count++;
		temp = temp -> next;

	}
	return count;

}

//7 add at position funtion
void addatPos() {
	
	int pos;
	printf("at which positon do you want to put data :\n");
	scanf("%d",&pos);

	int l;
	if(head == NULL) {

		head = createNode();

	} else if(pos == 1) {

		addFirst();

	} else if(pos > (l = count()) || pos < 0) {
		printf("This position doesn't exist\nadding data to the last node...\n");
		addLast();

	} else {
		dm *newNode = createNode();
		dm *temp = head;

		while(pos-2) {

			temp = temp -> next;
			pos--;
		}
		newNode -> next = temp -> next;
		temp -> next = newNode;
	}
}

//8 delete first node funtion
void deleteFirst() {

	dm *temp = head;
	head = head -> next;
	free(temp);

}

//9 delete last node funtion
void deleteLast() {

	dm *temp = head;
	while(temp->next->next != NULL) {

		temp = temp -> next;
	}
	free(temp->next);
	temp -> next = NULL;
}

//10 delete at position node function
void deleteatPos() {

	int pos;
	printf("which node do you want delete :\n");
	scanf("%d",&pos);
	
	int cnt = count();
	if(cnt == 1) {
		printf("There is only one node\n");

	} else if(pos == 1) {

		deleteFirst();

	} else if(pos <= 0 || pos == cnt+1) {

		addLast();

	} else if(pos > cnt +1) {
		
		printf("Invalid Node...\n");
	}else {

		dm *temp = head;
		while(pos -2) {

			temp = temp -> next;
			pos--;
		}
		dm *temp2 = temp ->next -> next;
		free(temp -> next);
		temp -> next = temp2;
	}
}

// main funtion
void main() {
	
	char choise;
	do{
		printf("1.Add node\n");
		printf("2.Add at first node\n");
		printf("3.Add at last node\n");
		printf("4.Add at position\n");
		printf("5.Delete first node\n");
		printf("6.Delete last node\n");
		printf("7.Delete at position\n");
		printf("8.Print linked list\n");
		printf("9.Total count of nodes\n");
		printf("10.Exit\n");
		
		int ch;
		printf("Enter choise :\n");
		scanf("%d",&ch);
		switch(ch) {

			case 1:
				addNode();
				break;
			
			case 2:
				addFirst();
				break;
			
			case 3:
				addLast();
				break;
			
			case 4:
				addatPos();
				break;
			
			case 5:
				deleteFirst();
				break;
			
			case 6:
				deleteLast();
				break;
			
			case 7:
				deleteatPos();
				break;
			
			case 8:
				printll();
				break;
			
			case 9:
				printf("%d\n",count());
				break;
			
			case 10 :
				break;
			
			default:
				printf("Wrong Choise\n");
				break;
		}
		getchar();
		printf("do you want to continue?[Y/y or N/n]\n");
		scanf("%c",&choise);

	}while(choise == 'Y' || choise == 'y');
}
