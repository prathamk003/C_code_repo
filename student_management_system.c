#include <stdio.h>

const int students = 10;
const int subjects = 5;
int i, j, choice;

void maxmarks (char stud_name[students] [30], int stud_marks[students][subjects]);
void pass (char stud_name[students] [30], int stud_marks[students][subjects]);
void fail (char stud_name[students] [30], int stud_marks[students][subjects]);
void percentage (char stud_name[students] [30], int stud_marks[students][subjects]);
void distinction (char stud_name[students] [30], int stud_marks[students][subjects]);

int main() {
  char name[students] [30]; 
  int marks[students][subjects]; 
  for (i = 0; i < students; i++) {
    printf("\nEnter name of student %d : ", i+1);
    scanf("%s", name[i]);
    for (j = 0; j < subjects; j++) {
      printf("Enter marks for subject %d for student %d : ", j+1, i+1);
      scanf("%d", &marks[i][j]);
    }
  }
  while (1) {
    printf("\n\n1. Find the name of student with maximum marks in a particular subject \n2. Calculate percentage result of a class \n3. Calculate total number of students who passed \n4. Find the number of students who have failed in a particular subject \n5. Find the number of students who passed with distinction \n6. Quit");
    printf("\nSelect an option: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1: maxmarks (name, marks); break;
      case 2: percentage (name, marks); break;
      case 3: pass (name, marks); break;
      case 4: fail (name, marks); break;
      case 5: distinction (name, marks); break;
      case 6: printf("Thank you"); break;
      default: printf("Invalid option"); break;
    } 
  }
}

void maxmarks (char stud_name[students] [30], int stud_marks[students][subjects]) {
  int large = 0, top;
  for (i = 0; i < subjects; i++) {
    for (j = 0; j < students; j++) {
      if (stud_marks[j][i] > large) {
        large = stud_marks[j][i];
        top = j;
      }
    }
  }
  printf("The maximum marks are %d scored by %s", large, stud_name[top]);
}

void pass (char stud_name[students] [30], int stud_marks[students][subjects]) {
  int p = 0, flag = 0;
  for (i = 0; i < students; i++) {
    
    for (j = 0; j < subjects; j++) {
      if (stud_marks[i][j] <= 40) {
        flag = 1;
        break;
      }
    }
    if (flag == 1) {
      flag = 0;
      continue;
    }
    else {
      p++;
    }
  }
  printf("Number of students who passed = %d", p);
}

void percentage (char stud_name[students] [30], int stud_marks[students][subjects]) {
  int flag = 0;
  float result, sum = 0;
  for (i = 0; i < students; i++) {
    for (j = 0; j < subjects; j++) {
      if (stud_marks[i][j] <= 40) {
        flag = 1;
        break;
      }
    }
    if (flag == 1) {
      flag = 0;
      continue;
    }
    else {
      sum++;
    }
  }
  result = (sum/students)*100;
  printf("Percentage result of class = %f", result);
}

void fail (char stud_name[students] [30], int stud_marks[students][subjects]) {
  int f=0, flag = 0;
  for (i = 0; i < students; i++) {
    flag = 0;
    for (j = 0; j < subjects; j++) {
      if (stud_marks[i][j] <= 40) {
        flag = 1;
        break;
      }
    }
    if (flag == 1) {
        f++;
    }
  }
  printf("Number of students who failed = %d", f);
}

void distinction (char stud_name[students] [30], int stud_marks[students][subjects]) {
  int d = 0;
  float p, sum;
  for (i = 0; i < students; i++) {
    sum = 0;
    p = 0;
    for (j = 0; j < subjects; j++) {
      sum = sum + stud_marks[i][j];
    }
    p = (sum/500)*100;
    if (p >= 75.00) {
      d++;
    }
  }
  printf("Number of students who passed with distinction = %d", d);
}
