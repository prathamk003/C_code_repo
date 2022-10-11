#include <stdio.h>

int factorial(int n);

int main() {
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of %d is %d", num, fact);
}
int factorial (int n) {
    int count = 1;
    for (int i=1; i <= n; i++) {
      count = count*i;
    }
    return count;
}
