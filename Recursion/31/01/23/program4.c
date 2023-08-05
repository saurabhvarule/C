#include<stdio.h>
#include<stdbool.h>


bool isSorted(int *ptr, int n) {
    if(n == 1) {
        return true;
    }
    if(*ptr < *(ptr+1)) {
        ptr++;
    } else {
        return false;
    }
    isSorted(ptr+1,n-1);

}


int main() {
    int arr[] = {1,2};
    printf("%d\n",isSorted(arr,2));

    return 0;
}