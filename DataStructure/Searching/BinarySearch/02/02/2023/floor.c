

#include<stdio.h>

int floorValue (int arr[], int size , int key) {
    int store = -1;
    int start = 0;
    int end = size-1;
    int mid;
    while(start<=end) {
        mid = (start+end)/2;

        if(arr[mid] == key) {
            return mid;
        }
        if(arr[mid] > key) {
            end = mid -1;
        }
        if(arr[mid] < key) {
            store = mid;
            start = mid +1;
        }
    }

    return store;
}
int main () {

    int arr[] = {1,3,5,7,9,11,13,15,17,18};
    printf("floor value = %d",floorValue(arr,10,14));
}