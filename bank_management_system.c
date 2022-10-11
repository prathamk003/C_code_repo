#include <stdio.h>

struct Customer {
long long int acc_no;
char name[30];
long int balance;
int banking;
long int pincode;
int type;
};

void read(struct Customer input[50], int n);
void display(struct Customer input[50], int n);
void search(struct Customer input[50], int n);
void identify(struct Customer input[50], int n);
void avail(struct Customer input[50], int n);
void location(struct Customer input[50], int n);
void acctype(struct Customer input[50], int n);

int main() {
  int num, choice, amount, index;
  struct Customer people[50];
  printf("Enter the number of customers you want to input: ");
  scanf("%d", &num);
  read(people, num);
  do {
    printf("\n\n1. Display all records");
    printf("\n2. Search a record");
    printf("\n3. List of customers availing Internet banking facility");
    printf("\n4. Know if customer is general, silver or golden");
    printf("\n5. List of customers as per account type");
    printf("\n6. Sort customers as per geographical location");
    printf("\n7. Quit");
    printf("\nEnter your task number: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1: display(people, num); break;
      case 2: search(people, num); break;
      case 3: avail(people, num); break;
      case 4: identify(people, num); break;
      case 5: acctype(people, num); break;
      case 6: location(people, num); break;
      case 7: choice = 0; break;
      default: printf("Invalid choice"); break;
    }
  } while (choice != 0);
  return 0;
}

void read(struct Customer input[50], int n) {
  for (int i = 0; i < n; i++) {
    printf("\nEnter data for customer %d", i+1);
    printf("\nEnter account number: ");
    scanf("%lld", &input[i].acc_no);
    printf("Enter name of account holder: ");
    scanf("%s", input[i].name);
    printf("Enter balance: ");
    scanf("%ld", &input[i].balance);
    printf("Enter if internet banking is 1.availed or 2.not availed: ");
    scanf("%d", &input[i].banking);
    printf("Enter pincode between 422001 and 422013: ");
    scanf("%ld", &input[i].pincode);
    printf("Enter account type 1.Saving 2.Recurring 3.Deposit: ");
    scanf("%d", &input[i].type);
  }
}

void display(struct Customer input[50], int n) {
  
  for (int i = 0; i < n; i++) {
    printf("\nCustomer: %d", i+1);
    printf("\nAccount number: %lld", input[i].acc_no);
    printf("\nName of account holder: %s", input[i].name);
    printf("\nBalance: %ld", input[i].balance);
  }
}

void search(struct Customer input[50], int n) {
  int index;
  long long int acc;
  printf("Enter account number to search: ");
  scanf("%lld", &acc);
  for (int i = 0; i < n; i++) {
    if (input[i].acc_no == acc) {
      index = i; 
      break;
    }
    else {
      index = -1;
    }
  }
  if (index == -1) {
    printf("Record not found");
  }
  else {
    printf("Name: %s\nBalance: %ld", input[index].name, input[index].balance);
  }
}

void identify(struct Customer input[50], int n) {
  long long int acc; 
  printf("Enter account number: ");
  scanf("%lld", &acc);
  for (int i = 0; i < n; i++) {
    if (input[i].acc_no == acc) {
      if (input[i].balance >= 1000000) {
        printf("%s is a golden customer", input[i].name);
      }
      else if (input[i].balance < 1000000 && input[i].balance > 500000) {
        printf("%s is a silver customer", input[i].name);
      }
      else if (input[i].balance <= 500000) {
        printf("%s is a general customer", input[i].name);
      }
    }
  }
}

void avail(struct Customer input[50], int n) {
  printf("List of customers availing internet facility: ");
  for (int i = 0; i < n; i++) {
    if (input[i].banking == 1) {
      printf("\n%s", input[i].name);
    }
  }
}

void location(struct Customer input[50], int n) {
  long int pin;
  printf("Enter pincode: ");
  scanf("%ld", &pin);
  for (int i = 0; i < n; i++) {
    if (input[i].pincode == pin) {
      printf("\n%s", input[i].name);
    }
  }
}

void acctype(struct Customer input[50], int n){
  printf("\nCustomers who have a savings account: ");
  for (int i = 0; i < n; i++) {
    if (input[i].type == 1) {
      printf("\n%s", input[i].name);
    }
  }
  printf("\nCustomers who have a recurring account: ");
  for (int j = 0; j < n; j++) {
    if (input[j].type == 2) {
      printf("\n%s", input[j].name);
    }
  }
  printf("\nCustomers who have a deposit account: ");
  for (int k = 0; k < n; k++) {
    if (input[k].type == 3) {
      printf("\n%s", input[k].name);
    }
  }
}
