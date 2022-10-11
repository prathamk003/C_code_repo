#include <stdio.h>

int fibonacci (int n);

int main() {
  int i, terms;
  printf("Enter the number of terms: ");
  scanf("%d", &terms);
  for (int i = 1; i <= terms; i++) {
    int j = fibonacci(i); 
    printf("%d ", j);
  }
  return 0;
}

int fibonacci (int n) {
  if (n == 1) {
    return 0;
  }
  if (n == 2) {
    return 1;
  }
  return fibonacci (n-1) + fibonacci (n-2);
}
