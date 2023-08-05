#include<stdio.h>
#include<stdbool.h>
int count = 0;
bool isValid(int *ptr,int n) {
    if(n == 0 && count <2) {
        return false;
    }
    if(count >=2) {
        return true;
    }
    if((*ptr)%2 == 0) {
        count++;
    }

    isValid(ptr+1,n-1);
}
int main() {
    int arr[] = {1,2,5,6};
    printf("%d\n",isValid(arr,4));
}