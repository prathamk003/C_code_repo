#include <stdio.h>
#include <string.h>

struct cricketer {
   int wickets, category, odi_played, age;
   char name[20];
   float bat_avg;
   char country[20];
};

void input(struct cricketer player[20], int n) ;
void output(struct cricketer player[20], int n) ;
void bat_count(struct cricketer player[20], int n) ;
void bowl_count(struct cricketer player[20], int n) ;
void high_avg(struct cricketer player[20], int n) ;
void max_wick(struct cricketer player[20], int n) ;
void display(struct cricketer player[20], int n) ;

int main() {
  int num, choice;
  struct cricketer p[20];
  printf("Enter number of players: ");
  scanf("%d", &num);
  do {
    printf("\n\n1. Enter player information ");
    printf("\n2. Display information of all players ");
    printf("\n3. Display number of batsmen of a particular country ");
    printf("\n4. Display batsman with highest average score ");
    printf("\n5. Display number of bowlers of a particular country ");
    printf("\n6. Display bowler that has taken maximum number of wickets ");
    printf("\n7. Display information of a particular player ");
    printf("\n8. Exit ");
    printf("\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1: input(p, num); break;
      case 2: output(p, num); break;
      case 3: bat_count(p, num); break;
      case 4: high_avg(p, num); break;
      case 5: bowl_count(p, num); break;
      case 6: max_wick(p, num); break;
      case 7: display(p, num); break;
      default: printf("Invalid choice"); break;
    }
  } while (choice != 0);
}

void input(struct cricketer player[50], int n) {
  for (int i = 0; i < n; i++) {
    printf("\n\nEnter name of player: ");
    scanf("%s", player[i].name);
    printf("Enter country: ");
    scanf("%s", player[i].country);
    printf("Enter category 1.batsman 2.bowler 3.wicket-keeper 4.all-rounder: ");
    scanf("%d", &player[i].category);
    printf("Enter number of ODI played: ");
    scanf("%d", &player[i].odi_played);
    printf("Enter age: ");
    scanf("%d", &player[i].age);
    printf("Enter batting average: ");
    scanf("%f", &player[i].bat_avg);
    printf("Enter number of wickets taken: ");
    scanf("%d", &player[i].wickets);
  }
}

void output(struct cricketer player[50], int n) {
  for (int i = 0; i < n; i++) {
    printf("\n\nName of player: %s", player[i].name);
    printf("\nCountry: %s", player[i].country);
    printf("\nCategory: %d", player[i].category);
    printf("\nNumber of ODI played: %d", player[i].odi_played);
    printf("\nAge: %d", player[i].age);
    printf("\nBatting average: %f", player[i].bat_avg);
    printf("\nNumber of wickets taken: %d", player[i].wickets);
  }
}

void bat_count(struct cricketer player[50], int n) {
  int m = 0;
  char c[20];
  printf("Enter name of country: ");
  scanf("%s", c);
  printf("Batsmen belonging to %s: ", c);
  for (int i = 0; i < n; i++) {
    m = strcmp(c, player[i].country);
    if (m == 0 && player[i].category == 1) {
      printf("\n%s", player[i].name);
    }
  }
}

void bowl_count(struct cricketer player[50], int n) {
  int m = 0;
  char c[20];
  printf("Enter name of country: ");
  scanf("%s", c);
  printf("Bowlers belonging to %s: ", c);
  for (int i = 0; i < n; i++) {
    m = strcmp(c, player[i].country);
    if (m == 0 && player[i].category == 2) {
      printf("\n%s", player[i].name);
    }
  }
}

void high_avg(struct cricketer player[50], int n) {
  int m = 0, s;
  for (int i = 0; i < n; i++) {
    if (player[i].bat_avg > m) {
      m = player[i].bat_avg;
      s = i;
    }
  }
  printf("Batsman with highest average score is %s", player[s].name);
}

void max_wick(struct cricketer player[50], int n) {
  int m = 0, s;
  for (int i = 0; i < n; i++) {
    if (player[i].wickets > m) {
      m = player[i].wickets;
      s = i;
    }
  }
  printf("Bowler that has taken maximum number of wickets is %s", player[s].name);
}
     

void display(struct cricketer player[50], int n) {
  int m = 0;
  char c[20];
  printf("Enter name of player: ");
  scanf("%s", c);
  for (int i = 0; i < n; i++) {
    m = strcmp(c, player[i].name);
    if (m == 0) {
      printf("\nCountry: %s", player[i].country);
      printf("\nCategory: %d", player[i].category);
      printf("\nNumber of ODI played: %d", player[i].odi_played);
      printf("\nAge: %d", player[i].age);
      printf("\nBatting average: %f", player[i].bat_avg);
      printf("\nNumber of wickets taken: %d", player[i].wickets);
    }
  }
}   
