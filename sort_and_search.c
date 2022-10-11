#include <stdio.h>
#include <string.h>

struct student {
  int roll;
  char name[30];
  float percentage;
};

void read (struct student s[30], int n);
void display (struct student r[30], int n);
void sort (struct student t[30], int n);
void search (struct student p[30], int n);

int main() {
  int num, choice;
  struct student s[30];
  printf("Enter number of students: ");
  scanf("%d", &num);
  read(s,num);
  do {
    printf("\n\n1. Sort data");
    printf("\n2. Search data");
    printf("\n3. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1: sort(s, num); break;
      case 2: search(s, num); break;
      case 3: return 0;
      default: printf("Invalid choice"); break;
    }
  } while (choice != 0);
  return 0;
}

void read (struct student s[30], int n) {
  printf("\nEnter student data");
  for (int i=0; i<n; i++) {
    printf("\n\nFor student %d", i+1);
    printf("\nEnter roll number: ");
    scanf("%d", &s[i].roll);
    printf("Enter name: ");
    scanf("%s", s[i].name);
    printf("Enter percentage: ");
    scanf("%f", &s[i].percentage);
  }
}

void display (struct student r[30], int n) {
  for (int i=0; i<n; i++) {
    printf("\nroll number: %d", r[i].roll);
    printf("\tname: %s", r[i].name);
    printf("\tpercentage: %0.2f", r[i].percentage);
  }
}

void sort (struct student t[30], int n) {
  float temp;
  int m;
  char k[30];
  printf("\nUnsorted data: ");
  display (t, n);
  for (int i=1; i<n; i++) {
    for (int j=0; j<n-i; j++) {
      if (t[j].percentage < t[j+1].percentage) {
        temp = t[j].percentage;
        t[j].percentage = t[j+1].percentage;
        t[j+1].percentage = temp;

        m = t[j].roll;
        t[j].roll = t[j+1].roll;
        t[j+1].roll = m;
        
        strcpy(k, t[j].name);
        strcpy(t[j].name, t[j+1].name);
        strcpy(t[j+1].name, k);
      }
    }
  }
  printf("\nAfter sorting in descending order: ");
  display(t, n);
}

void search (struct student p[30], int n) {
  int rn, flag=0, k;
  printf("Enter roll number you want to search: ");
  scanf("%d", &rn);
  for (int i=0; i<n; i++) {
    if (rn == p[i].roll) {
      flag = 1;
      k = i;
      break;
    }
  }
  if (flag == 1) {
    printf("\nStudent data is present. The data is as follows: ");
    printf("\nroll number: %d", p[k].roll);
    printf("\tname: %s", p[k].name);
    printf("\tpercentage: %0.2f", p[k].percentage);
  }
  else {
    printf("\nStudent data is not present");
  }
}
