
#include<stdio.h>

int binarySearch(int ptr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = (start + end )/2;

    while(start<=end) {
        if(ptr[mid] == key) {
            return mid;
        } else if (ptr[mid]<key) {
            start = mid +1;
        } else {
            end = mid -1;
        }
        
        mid = (start+end)/2;
    }

    return -1;

}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int result = binarySearch(arr,10,1);

    if(result == -1) {
        printf("key not found\n");
    } else {
        printf("kry present at index %d\n",result);
    }

    return 0;
}