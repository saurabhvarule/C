#include<stdio.h>
int rev = 0;
int reverse(int n) {
    if(n == 0) {
        return 0;
    }
    rev = rev*10 + n%10;
    printf("%d\n",rev);
    reverse(n/10);
    return rev;

}
int main() {
    printf("%d",reverse(12345));
}