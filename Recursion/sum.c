#include<stdio.h>

int sum(int n) {
    int add = 0;
    if(n>0) {
        return n + sum(n-1);
    }
}
int main() {
    printf("%d \n",sum(10)); 

    return 0;
}