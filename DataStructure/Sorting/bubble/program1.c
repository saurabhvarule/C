#include<stdio.h>

void bubbleSort(int arr[],int size) {
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleSortSingle(int arr[],int size) {
    int j=0;
    for(int i=0; i<size-1;) {
        if(j<size-i-1) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            j++;
            continue;
        }
        j = 0;
        i++;
    }
}
int main () {
    int size = 6;
    int arr[] = {9,7,3,5,2,1};
    
    for(int i=0; i<size; i++) {
        printf("%d\t",arr[i]);
    }

    //bubbleSort(arr,size);
    bubbleSortSingle(arr,size);

    printf("\n");
    for(int i=0; i<size; i++) {
        printf("%d\t",arr[i]);
    }
}