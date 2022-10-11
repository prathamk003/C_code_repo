#include <stdio.h>

struct Complex {
  float real;
  float imaginary;
};

void input (struct Complex *n);
void display (struct Complex *n);
void add (struct Complex *n1, struct Complex *n2);
void product (struct Complex *n1, struct Complex *n2);

int main() {
  struct Complex num1, num2;
  printf("\nNumber 1");
  input(&num1);
  printf("\nNumber 2");
  input(&num2);
  printf("\nNumber 1 = ");
  display(&num1);
  printf("\nNumber 2 = ");
  display(&num2);
  printf("\nAfter addition");
  add(&num1, &num2);
  printf("\nAfter multiplication");
  product(&num1, &num2);
}

void input (struct Complex *n) {
  printf("\nEnter real part: ");
  scanf("%f", &n->real);
  printf("Enter imaginary part: ");
  scanf("%f", &n->imaginary);
}

void display (struct Complex *n) {
  printf("%0.2f + %0.2fi", n->real, n->imaginary);
}

void add (struct Complex *n1, struct Complex *n2) {
  struct Complex n;
  n.real = n1->real + n2->real;
  n.imaginary = n1->imaginary + n2->imaginary;
  printf("\nNumber = %0.2f + %0.2fi", n.real, n.imaginary);
}

void product (struct Complex *n1, struct Complex *n2) {
  struct Complex n;
  n.real = (n1->real) * (n2->real) - (n1->imaginary) * (n2->imaginary);
  n.imaginary = (n1->real) * (n2->imaginary) + (n2->real) * (n1->imaginary);
  printf("\nNumber = %0.2f + %0.2fi", n.real, n.imaginary);
}
