

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo {

	int data;
	struct Demo *next;

}dm;

dm *head = NULL;

dm* createNode () {

	dm *newNode = (dm*)malloc(sizeof(dm));
	printf("enter data :\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode() {

	dm *newNode = createNode();
	
	if(head == NULL) {

		head = newNode;
	} else {

		dm *temp = head;

		while(temp->next != NULL) {

			temp = temp->next;
		}
		temp->next = newNode;
	}
}

int printData() {

	if(head == NULL) {

		printf("Linked list is empty\n");

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

int countNode() {

	dm *temp = head;
	int count = 0;

	while(temp != NULL) {

		count++;
		temp = temp->next;
	}

	return count;
}

// first occurance of a number
int firstOccurance() {

	dm *temp = head;
	int search;
	printf("enter search :\n");
	scanf("%d",&search);

	int index = 0;

	while(temp != NULL) {
		
		index++;
		if(search == temp->data) {
			printf("first occurance of %d is at index %d\n",search,index);
			return index;
		}
		temp = temp->next;

	}

	printf("not found\n");
	return -1;
}


//second last occurance of a number
int secondLastOccurance(int search) {

	dm *temp = head;

	int index = 0;
	int occr = 0;
	int now = 0;
	int prev = 0;

	while(temp != NULL) {
	
		index++;
		if(search == temp->data) {
			prev = now;
			now = index;
			occr++;
		}
		temp = temp->next;
	}
	if(occr == 1) {

		printf("%d only occurs once at %d\n",search,now);
		
		return 0;
	}else if(occr>1){

		printf("second last occurance of %d is at %d\n",search,prev);

		return 0;
	}
	
	printf("not found\n");
	return -1;
}

//occurance of particular number
int occurance(int search) {

	dm *temp = head;
	int occr = 0;
	while(temp != NULL) {

		if(search == temp->data) {

			occr++;
		}
		temp = temp->next;
	}
	if(occr == 1) {

		printf("%d occured only %d time in a list\n",search,occr);

		return 0;

	} else if(occr > 1) {
		
		printf("%d occured %d times in a list\n",search,occr);

		return 0;

	}

	printf("not found\n");

	return -1;
}

/*
Write a program that adds the digits of a data element from a singly linear
linked list and changes the data. (sum of data element digits)
Input linked list : |11|->|12|->|13|->|141|->|2|->|158|
Output linked list : |2|->|3|->|4|->|6|->|2|->|14| 
*/
// solution -->>
void changeData() {

	dm *temp = head;

	while(temp != NULL) {

		int sum = 0;
		int num = temp ->data;
		
		if(num > 9) {
			
			while(num > 0) {

				sum += num % 10;
				num /= 10;
			}
			temp->data = sum;
		}
		temp = temp->next;
	}
}

/*
Program 5.
Write a program that searches all the Palindrome data elements from a
singly linear linked list. And Print the position of palindrome data
Input: linked list: |12|->|121|->|30|->|252|->|35|->|151|->|70|
Output:
Palindrome found at 2
Palindrome found at 4
Palindrome found at 6
*/

int isPalindrome() {

	dm *temp = head;
	int i = 1;
	while(temp != NULL) {
		
		int num = temp->data;
		int rev = 0;
		while(num > 0) {
			rev = rev * 10 + num % 10;
			num /= 10;
		}
		if(rev == temp->data) {
			printf("Palindrome found at %d \n",i);
		}
		temp = temp->next;
		i++;
	}	

	return 0;

}

int main() {

	int s;
	printf("no of nodes?\n");
	scanf("%d",&s);

	while(s) {
		
		addNode();
		s--;
	}

	printData();
	isPalindrome();
	//printData();


	return 0;

}

