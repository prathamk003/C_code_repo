#include <stdio.h>

int main() {
  int numberofguests , numberofnights , isbusiness , charges , extraguest , disc , finalcharges ;
  printf ("Enter number of guests: \n");
  scanf ("%d", &numberofguests);
  printf ("Enter number of nights: \n");
  scanf ("%d", &numberofnights);
  printf ("Enter 1 if on business trip and 0 if any other: \n");
  scanf ("%d", &isbusiness);

  if (numberofguests <= 2) {
    charges = 2500*numberofnights ;
    if (isbusiness == 1) {disc = charges*0.2;}
    else {disc = 0;}
  }
  if (numberofguests == 3) {
    charges = 3500*numberofnights ;
    if (isbusiness == 1) {disc = charges*0.2;}
    else {disc = 0;}
  }
  if (numberofguests == 4) {
    charges = 4500*numberofnights ;
    if (isbusiness == 1) {disc = charges*0.2;}
    else {disc = 0;}
  }
  if (numberofguests > 4) {
    extraguest = numberofguests - 4; 
    charges = (4500 + (extraguest*1000))*numberofnights ;
    if (isbusiness == 1) {disc = charges*0.2;}
    else {disc = 0;}
  }
  finalcharges = charges - disc;
  printf ("The discount is %d and the final charges are %d", disc, finalcharges);
}
