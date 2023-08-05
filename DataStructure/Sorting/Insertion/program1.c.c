#include<stdio.h>

//sort funtion
void insertionSort(int *ptr,int s) {
    int key,i,j;
    for(int i=1; i<s; i++) {
        j = i-1;
        key = ptr[i];
        while(j>=0 && ptr[j]>key) {
            ptr[j+1] = ptr[j];
            j--;
        }
        ptr[j+1] = key;
    }
}
int main() {
    printf("Enter size of array :\n");
    int s;
    scanf("%d",&s);
    int arr[s];
    for(int i=0; i<s; i++) {
        printf("Enter number :");
        scanf("%d",&arr[i]);
    }
    
    printf("Before Sort\t :");
    for(int i=0; i<s; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    // call to sort
    sort(arr,s);
    
    printf("After Sort\t :");
    for(int i=0; i<s; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}