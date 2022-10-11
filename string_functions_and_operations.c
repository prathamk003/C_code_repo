#include <stdio.h>
#include <string.h>
#include <ctype.h>

void length (char *word);
void palindrome (char *word);
void compare (char *word);
void copy (char *word);
void reverse (char *word);
void substring (char *word);

int main() {
  int choice;
  char str[30], *st;
  st = &str;
  printf("Enter string 1: ");
  scanf("%s", st);
  printf("Choose what you want to do");
  do {
    printf("\n\n1. Length");
    printf("\n2. Palindrome");
    printf("\n3. Compare two strings");
    printf("\n4. Copy string");
    printf("\n5. Reverse string");
    printf("\n6. Check substring of first ");
    printf("\nEnter your task number: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1: length(st); break;
      case 2: palindrome(st); break;
      case 3: compare(st); break;
      case 4: copy(st); break;
      case 5: reverse(st); break;
      case 6: substring(st); break;
      default: printf("Invalid choice"); 
    }
  } while (choice != 7);
  return 0;
}

void length (char *word) {
  int count = 0;
  for (int i = 0; *(word + i) != '\0'; i++) {
    count++;
  }
  printf("The length of the string 1 is %d", count);
}

void palindrome (char *word) {
  int count = 0, flag = 0;
  for (int i = 0; word[i] != '\0'; i++) {
    count++;
  }
  for (int i = 0; i < count; i++) {
    if (*(word + i) == *(word + count - i - 1)) {
      flag++;
    }
  }
  if (flag == count) {
    printf("String is a palindrome.");
  }
  else {
    printf("String is not a palindrome.");
  }
}

void compare (char *word) {
  int count = 0;
  for (int i = 0; *(word + i) != '\0'; i++) {
    count++;
  }
  char two[30], *tw;
  tw = &two;
  printf("Enter string 2: ");
  scanf("%s", tw);
  for (int i = 0; i < count; i++) {
    if (*(word + i) > *(two + i)) {
      printf("String 1 is greater than string 2");
      break;
    }
    else if (*(word + i) < *(two + i)) {
      printf("String 2 is greater than string 1");
      break;
    }
  }
}

void copy (char *word) {
  char two[30], *tw;
  tw = &two;
  int count = 0;
  for (int i = 0; *(word + i) != '\0'; i++) {
    count++;
  }
  for (int i = 0; i < count; i++) {
    *(tw + i) = *(word + i);
  }
  printf("After copying the string is %s", two);
}

void reverse (char *word) {
  char two[30], *tw;
  tw = &two;
  int count = 0;
  for (int i = 0; *(word + i) != '\0'; i++) {
    count++;
  }
  for (int i = 0; i < count; i++) {
    *(tw + i) = *(word + count - i - 1);
  }
  printf("After reversing the string is %s", two);
}

void substring (char *word) {
  char two[30], *tw;
  tw = &two;
  printf("Enter substring: ");
  scanf("%s", tw);
  int j = 0, count = 0;
  for (int i = 0; *(word + i) != '\0'; i++) {
    if (*(word + i) == *(tw + j)) {
      count = i+1;
      while (*(word + i) == *(tw + j)) {
        i++; j++;
      }
      if (*(tw + j) == '\0') {
        printf("The substring is present in given string at position %d", count);
      }
      else {
        i = count;
        count = 0;
      }
    }
  }
  if (count == 0) {
    printf("The substring is not present.");
  }
}
