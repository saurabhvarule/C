
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct Demo {

	int data;
	struct Demo *next;

}dm;

// head 
dm *head = NULL;

// create node funtion
dm* createNode() {
	
	dm *newNode = (dm*)malloc(sizeof(dm));
	printf("enter data:\n");
	scanf("%d",&newNode -> data);
	newNode -> next = NULL;

	return newNode;
}

// add Node funtion
void addNode() {

	dm *newNode = createNode();
	if(head == NULL) {

		head = newNode;
	} else {

		dm *temp = head;
		while(temp->next != NULL) {

			temp = temp -> next;
		}
		temp -> next = newNode;
	}
}

// count function
int count() {

	int count = 0;
	dm *temp = head;
	while(temp != NULL) {

		count++;
		temp = temp->next;
	}

	return count;
}

// print data funtion
void printData() {

	dm *temp = head;
	while(temp != NULL) {

		printf("->| %d |",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void frequency(int search) {

	int last;
	int now;
	int index = 1;
	int occr = 0;
	dm *temp = head;
	bool flag;
	while(temp != NULL) {

		if(search == temp->data) {

			last = now;
			now = index;
			occr++;
			flag = true;
		}
		temp = temp->next;
		index++;
	}
	if(occr == 1) {
		printf("%d only occured once at index %d\n",search,now);

	} else if(flag == true) {

		printf("second last occurance of %d is at index %d\n",search,last);

	} else {

		printf("not present\n");
	}
}

//main funtion
void main() {

	int s;
	printf("how many nodes do you want?\n");
	scanf("%d",&s);
	
	if(s>0) {
		
		while(s) {
			
			addNode();
			s--;
		}
		
		printData();
	
		printf("enter data to search\n");
		int search;
		scanf("%d",&search);
	
		frequency(search);
		printData();
	} else {

		printf("invalid input..\n");
	}
}
