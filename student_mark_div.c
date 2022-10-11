#include <stdio.h>

int main() 
{
  float phy, chem, maths, eng, cs, marks_obtained, aggregate;
  printf ("Enter marks obtained in Physics: \n");
  scanf ("%f" , &phy);
  printf ("Enter marks obtained in Chemistry: \n");
  scanf ("%f" , &chem);
  printf ("Enter marks obtained in Mathematics: \n");
  scanf ("%f" , &maths);
  printf ("Enter marks obtained in English: \n");
  scanf ("%f" , &eng);
  printf ("Enter marks obtained in Computer Science: \n");
  scanf ("%f" , &cs);
  marks_obtained = phy + chem + maths + eng + cs;
  aggregate = (marks_obtained/500)*100;
  printf ("Your aggergate score is %.2f", aggregate);
  if (phy < 40 || chem < 40 || maths < 40 || eng < 40 || cs < 40) 
  {
    printf ("\nYou have failed");
  }
  else if (aggregate >= 75) {
    printf ("\nYour grade is distinction");
  }
  else if (aggregate >= 60 && aggregate < 75) {
    printf ("\nYour grade is first division");
  }
  else if (aggregate >= 50 && aggregate < 60) {
    printf ("\nYour grade is second division");
  }
  else if (aggregate >= 40 && aggregate < 50) {
    printf ("\nYour grade is third division");
  }
  else 
  {
    printf ("\nYou have FAILED");
  }
  return 0;
}
