#include<stdio.h>

void leftMax(int *arr1, int *arr2, int N) {
    arr2[0] = arr1[0];
    for(int i=1;i<N;i++) {
        if(arr2[i-1]<arr1[i]) {
            arr2[i] = arr1[i];
        } else {
            arr2[i] = arr2[i-1]; 
        }
    }
}

void rightMax(int *arr1,int *arr3,int N) {
    arr3[N] = arr1[N];  
    for(int i=N-1; i>=0; i--) {
        if(arr3[i+1] < arr1[i]) {
            arr3[i] = arr1[i];
        } else {
            arr3[i] = arr3[i+1]; 
        }
    }
}

int main() {

    int arr1[] = {4,8,2,3,5,9,7};
    int N = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[N];
    printf("Original  = ");
    for(int i=0;i<N;i++) {
        printf("%d\t",arr1[i]);
        if(i==N-1)
            printf("\n");
    }

    // function call
    leftMax(arr1,arr2,N);
    printf("Left Max  = ");
    for(int i=0;i<N;i++) {
        printf("%d\t",arr2[i]);
    }

    int arr3[N];
    // funtion call
    rightMax(arr1,arr3,N-1);
    printf("\nRight Max = "); 
    for(int i=0;i<N;i++) {
        printf("%d \t",arr3[i]); 
    }
}