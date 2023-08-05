

#include<stdio.h>
int partition(int *arr1,int start,int end) {
    
}
void quickSort(int *arr1,int start,int end) {

    if(start<end) {
        int pivot = partion(arr1,start,end);
        quickSort(arr1,start,pivot-1);
        quickSort(arr1,pivot+1,end);
    }
}
int main() {

    int arr1[] = {7,3,9,8,1,5,6};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    quickSort(arr1,0,n-1);
    return 0;
}