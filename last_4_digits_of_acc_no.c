#include <stdio.h>
#include <math.h>

int main() {
  long long int acc, last, a = 1000;
  printf("Enter account number: ");
  scanf("%lld", &acc);
  printf("Last four digits are: ");
  for (int i = 0; i < 4; i++) {
    last= (acc / a) % 10;
    printf("%lld", last);
    a = a / 10;
  } 
  return 0;
}
