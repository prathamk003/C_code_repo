#include <stdio.h>

int main() {
  int n, flag = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (n < 2) {
    printf("The number is neither prime nor composite.");
  }
  else {
    for (int i = 2; i < n; i++) {
      if (n % i == 0) {
         flag = 1;
        break;
      } 
    }
    if (flag == 1) {
    printf("%d is not prime", n);
    }
    else {
    printf("%d is prime", n);
    }
  }
  return 0;
}
