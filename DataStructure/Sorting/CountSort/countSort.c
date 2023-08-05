

#include<stdio.h>

void countSort(int arr1[],int N) {
	int max = arr1[0];
	// step 1 :
	for(int i=1; i<N; i++) {

		if(max < arr1[i]) 
			max = arr1[i];
	}

	// step 2 :
	int countArr[max+1];
	for(int i=0; i<=max; i++) {

		countArr[i]= 0;
	}

	// step 3 :
	for(int i=0; i<N; i++) {

		countArr[arr1[i]]++;
	}

	// step 4 :
	for(int i=1; i<=max; i++) {

		countArr[i] = countArr[i] + countArr[i-1];
	}

	int output[N];
	for(int i=N-1; i>=0; i--) {
		output[countArr[arr1[i]]-1] = arr1[i];
		countArr[arr1[i]]--;
	}
	for(int i=0; i<N; i++) {

		arr1[i] = output[i];
	}

}
void main() {

	int arr1[] = {3,8,5,6,3,2,9,1};
	int N = sizeof(arr1)/sizeof(arr1[0]);

	for(int i=0; i<N; i++) {

		printf("%d ",arr1[i]);
	} 
	printf("\n");

	countSort(arr1,N);
	for(int i=0; i<N; i++) {

		printf("%d ",arr1[i]);
	}
	printf("\n");
}
