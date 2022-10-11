#include <stdio.h>

void accept (int a[30], int num);
void display (int t[30], int n);
void bubble (int p[30], int n);
void selection (int q[30], int n);
void insertion (int r[30], int n);
   
int main() {
  int a[30], num, choice;
  printf("Enter number of elements: ");
  scanf("%d", &num);
  accept(a,num);
  do {
    printf("\n\n1. Bubble sort");
    printf("\n2. Selection sort");
    printf("\n3. Insertion sort");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1: bubble(a, num); break;
      case 2: selection(a, num); break;
      case 3: insertion(a, num); break;
      case 4: choice = 0; break;
      default: printf("Invalid choice"); break;
    }
  } while (choice !=0);
}

void accept (int a[30], int num) {
  printf("Enter integers into array: ");
  for(int i=0; i<num; i++) {
    scanf("%d", &a[i]);
  }
}

void display(int t[30], int n) {
  for (int i=0; i<n; i++) {
    printf("%d\t", t[i]);
  }
}
void bubble (int p[30], int n) {
  int temp;
  printf("\nAscending order");
  for (int i=1; i<n; i++) {
    for (int j=0; j<n-i; j++) {
      if (p[j+1] < p[j]) {
        temp = p[j+1];
        p[j+1] = p[j];
        p[j] = temp;
      }
    }
    printf("\nAfter pass %d: ", i);
    display(p, n);
  }
  printf("\nFinal answer: ");
  display(p, n);
}

void selection (int q[30], int n) {
  int temp, k;
  printf("\nDescending order");
  for (int i=0; i<n-1; i++) {
    k=i; 
    for (int j=i+1; j<n; j++) {
      if (q[k] < q[j]) {
        temp = q[i];
        q[i] = q[j];
        q[j] = temp;
      }
    }
    printf("\nAfter pass %d: ", i+1);
    display(q, n);
  }
  printf("\nFinal answer: ");
  display(q, n);
}

void insertion (int r[30], int n) {
  int temp, i, j;
  printf("\nAscending order");
  for (int i=1; i<n; i++) {
    temp = r[i];
    j = i-1;
    while (j>=0 && r[j]>temp) {
      r[j+1] = r[j];
      j=j-1;
    }
    r[j+1] = temp;
    printf("\nAfter pass %d: ", i);
    display(r, n);
  }
  printf("\nFinal answer: ");
  display(r, n);
}
