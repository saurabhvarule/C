#include<stdio.h>
int countZero(int num) {
    int count = 0;
    if(num == 0) {
        return 0;
    }
    if(num%10 == 0) {
        count++;
    }
    return count + countZero(num/10);
}

int main() {

 printf("count = %d\n",countZero(12304050));   

 return 0;
}