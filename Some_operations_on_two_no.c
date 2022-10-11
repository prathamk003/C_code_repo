#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, p;
  int operation;
  float base, exponent;
  do {
    printf ("Enter first number: ");
    scanf ("%f", &a);
    printf ("\nEnter second number: ");
    scanf ("%f", &b);
     
    printf ("\n1. Addition(+) \n2. Subtraction(-) \n3. Multiplication(*) \n4. Division(/) \n5. Special Operation(9a+3b) \n6. Power(^) \n7. Exit \n");
    printf ("Enter choice of operator: \n");
    scanf ("%d", &operation);
    
    switch (operation) {
      case 1: c = a + b; printf ("Addition: %f \n\n", c); break;
      case 2: c = a - b; printf ("Subtraction: %f \n\n", c); break;
      case 3: c = a * b; printf ("Multiplication: %f \n\n", c); break;
      case 4: c = a / b; printf ("Division: %f \n\n", c); break;
      case 5: c = (9*a) + (3*b); printf ("Special operation: %f \n\n", c); break;
      case 6: printf ("Enter base: ");
              scanf ("%f", &base);  
              printf ("Enter exponent: ");
              scanf ("%f", &exponent);   
              p = pow((float)base, (float)exponent); printf("Power: %f \n\n", p); break;
      default: printf ("You have entered invalid operation. TRY AGAIN. \n\n"); break;
    } 
  } while (operation < 7);
  return 0;
}
