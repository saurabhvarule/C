#include<stdio.h>

void selectionSort(int *arr1,int n) {
    for(int i=0; i<n; i++) {
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr1[j]<arr1[minIndex]) {
                minIndex = j; 
            }    
        }
        int temp = arr1[i];
        arr1[i] = arr1[minIndex];
        arr1[minIndex] = temp;

    }
}
int main () {

    int arr1[] = {7,4,9,2,5,6,0};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    for(int i=0; i<n; i++) {
        printf("| %d |\t",arr1[i]);
    }

    selectionSort(arr1,n);
    printf("\n");
    
    for(int i=0; i<n; i++) {
        printf("| %d |\t",arr1[i]);
    }

    return 0;
}