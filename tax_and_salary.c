#include <stdio.h>

int main() {
  float basicpay, HRA, TA, totalsalary, professionaltax, grosssalary;
  printf ("Enter basic pay: \n");
  scanf ("%f", &basicpay);
  if (basicpay <= 0) {
    printf ("Basic pay can't be negative. \n");
    return 0;
  }
  HRA = 0.1*basicpay;
  TA = 0.05*basicpay;
  totalsalary = basicpay + HRA + TA;
  professionaltax = 0.02*totalsalary;
  grosssalary = totalsalary - professionaltax;
  printf ("Total salary payable is %f. \n", grosssalary);
}
