#include<stdio.h>

int stepCount(int num) {
    int count = 0;
    if(num == 0) {
        return 0;
    }
    if(num%2 == 0) {
        num/=2;
        count++;
    } else {
        count++;
        num--;

    }
    printf("%d\n",count);
    return count + stepCount(num);    
    
}
int main() {

    printf("total steps = %d\n",stepCount(14));

    return 0;
}