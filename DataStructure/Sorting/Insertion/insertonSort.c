

#include<stdio.h>

void insertionSort(int *arr1,int n) {
    for(int i=1; i<n; i++) {
        int val = arr1[i];
        int j;
        for(j=i-1; j>=0 && val<arr1[j]; j--) {
            arr1[j+1] = arr1[j];
        }
        arr1[j+1] = val;
    }
}
int main () {

    int arr1[] = {5,8,9,1,4,2,6,0};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    for(int i=0; i<n; i++) {
        printf("| %d |\t",arr1[i]);
    }

    insertionSort(arr1,n);
    printf("\n");
    for(int i=0; i<n; i++) {
        printf("| %d |\t",arr1[i]);
    }
    return 0;
}