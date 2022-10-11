#include <stdio.h>

int main() {
  int a, b, c, d, large , larger, largest;
  printf ("Enter four numbers: \n");
  scanf ("%d %d %d %d", &a, &b, &c, &d);
  large = (a > b)?a:b;
  printf ("\nLargest number of first two numbers is %d",large);
  larger = (a > b && a>c) ? a:(b>c)?b:c;
  printf ("\nLargest number of first three numbers is %d",larger);
  largest = (a>b && a>c && a>d)?a:((b>c && b>d)?b:((c>d) ? c:d));
  printf ("\nLargest number of the four numbers is %d \n",largest);
  return 0;
}
