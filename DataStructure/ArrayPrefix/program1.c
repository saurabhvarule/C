

#include<stdio.h>

int sumRange(int arr1[],int l) {
    printf("%d\n",l);

    int arr2[l];

    arr2[0] = arr1[0];
    for(int i=1;i<l; i++) {
        arr2[i] = arr1[i] + arr2[i-1];
    }

    int start;
    int end;
    printf("enter start :\n");
    scanf("%d",&start);
    
    printf("enter end :\n");
    scanf("%d",&end);
    
    if(start == 0) {
        return arr2[end];
    } else {
        return arr2[end] - arr2[start-1];
    }
}
int main() {
    int arr1[] = {4,-5,3,2,7,};

    int sum = sumRange(arr1,sizeof(arr1)/sizeof(arr1[0]));
    printf("sum = %d",sum);

}