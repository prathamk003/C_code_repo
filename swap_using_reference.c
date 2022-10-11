#include <stdio.h>

void swap (int *a, int *b);
int main() {
  int n1,n2;
  printf("Enter two numbers: ");
  scanf("%d %d", &n1, &n2);
  printf("Before swapping in main a = %d and b = %d", n1, n2);
  printf("\nBefore swapping in main &a = %p and &b = %p", &n1, &n2);
  swap(&n1, &n2);
  printf("\nAfter swapping in main a = %d and b = %d", n1, n2);
  printf("\nAfter swapping in main &a = %p and &b = %p", &n1, &n2);
  
  return 0;
}

void swap (int *a, int *b) {
  int z;
  z = *a;
  *a = *b;
  *b = z;
  printf("\nAfter swapping in function a = %d and b = %d", *a, *b);
  printf("\nAfter swapping in function &a = %p and &b = %p", a, b);
}
