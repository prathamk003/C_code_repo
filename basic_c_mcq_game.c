#include <stdio.h>

int main() {
int ans, count=0;

printf("\n\n ********* Introduction to C MCQ
*********");
printf("\n >> There will be a total of 10 questions");
printf("\n >> You will be given 4 options and you have to
press 1, 2 ,3 or 4 for the right option");
printf("\n >> Each question will carry 1 points");
printf("\n >> You will be asked questions continuously.");
printf("\n >> There is no negative marking for wrong
answer");
printf("\n\n ****** BEST OF LUCK ******\n\n");
printf("Q1. Who invented C Language?\n");
printf(" 1. Charles Babbage\n 2. Dennis Ritchie\n 3.
Graham Bell\n 4. Steve Jobs\n");
printf("Your answer: ");
scanf("%d", &ans);
if(ans == 2) {
printf("Correct answer");
count = count + 1;

}
else {
printf("Wrong answer \nCorrect answer is 2. Full name
is Dennis MacAlistair Ritchie. He also invented Unix
Operating System along with his colleague Ken Thomson.");
}

printf("\n\nQ2. C Language is a successor to which
language?\n");
printf(" 1. FORTRAN\n 2. D Language\n 3. BASIC\n 4. B
Language\n");
printf("Your answer: ");
scanf("%d", &ans);
if(ans == 4) {
printf("Correct answer");
count = count + 1;
}
else {
printf("Wrong answer \nCorrect answer is 4. ");
}

printf("\n\nQ3. C is a which level language?\n");
printf(" 1. Low Level\n 2. High Level\n 3. Low + High \n
4. None \n");
printf("Your answer: ");
scanf("%d", &ans);

if(ans == 2) {
printf("Correct answer");
count = count + 1;
}
else {
printf("Wrong answer \nCorrect answer is 2. C is a high
level language. Another example is BASIC.");
}

printf("\n\nQ4. Low level language is\n");
printf(" 1. Human readable like language\n 2. language
with big program size\n 3. language with small program
size\n 4. Difficult to understand and readability is
questionable\n");
printf("Your answer: ");
scanf("%d", &ans);
if(ans == 4) {
printf("Correct answer");
count = count + 1;
}
else {
printf("Wrong answer \nCorrect answer is 4. Looks like
raw data often in the form of 1's and 0's.");
}

printf("\n\nQ5. High level language is a\n");

printf(" 1. Human readable like language\n 2. language
with big program size\n 3. language with small program
size\n 4. Difficult to understand and readability is
questionable\n");
printf("Your answer: ");
scanf("%d", &ans);
if(ans == 1) {
printf("Correct answer");
count = count + 1;
}
else {
printf("Wrong answer \nCorrect answer is 1. Examples
are C and BASIC.");
}

printf("\n\nQ6. C is ___ type of programming language\n");
printf(" 1. Object Oriented\n 2. Procedural\n 3. Bit level
language\n 4. Functional\n");
printf("Your answer: ");
scanf("%d", &ans);
if(ans == 2) {
printf("Correct answer");
count = count + 1;
}
else {
printf("Wrong answer \nCorrect answer is 2. C is a

procedural language. It is written in a number of steps using
statements and functions. Logic is clearly depicted in the
program. Procedural language is aslo called Imperative
Language. Examples are COBAL, BASIC etc.");
}

printf("\n\nQ7. C language was invented in which
laboratories?\n");
printf(" 1. Uniliver Labs\n 2. IBM Labs\n 3. AT&T Bell
Labs\n 4. Verizon Labs\n");
printf("Your answer: ");
scanf("%d", &ans);
if(ans == 3) {
printf("Correct answer");
count = count + 1;
}
else {
printf("Wrong answer \nCorrect answer is 3. C was
invented in Bell Laboratories in New Jersey.");
}

printf("\n\nQ8. C language was invented to develop which
Operating System?\n");
printf(" 1. Android\n 2. Linux\n 3. Ubuntu\n 4. Unix\n");
printf("Your answer: ");
scanf("%d", &ans);

if(ans == 4) {
printf("Correct answer");
count = count + 1;
}
else {
printf("Wrong answer \nCorrect answer is 4. C was
invented to develop Unix Operating System to overcome
compatibility with different Hardware Platforms.");
}

printf("\n\nQ9. C language was invented in the year?\n");
printf(" 1. 1999\n 2. 1978\n 3. 1972\n 4. 1990\n");
printf("Your answer: ");
scanf("%d", &ans);
if(ans == 3) {
printf("Correct answer");
count = count + 1;
}
else {
printf("Wrong answer \nCorrect answer is 3. ");
}

printf("\n\nQ10. C language is used in the development
of?\n");
printf(" 1. Databases\n 2. Graphic applications\n 3. Word
Processors\n 4. All of the above\n");

printf("Your answer: ");
scanf("%d", &ans);
if(ans == 4) {
printf("Correct answer");
count = count + 1;
}
else {
printf("Wrong answer \nCorrect answer is 4. C language
is very efficient in using hardware resources.");
}
printf("\n\nYour total score is %d out of 10", count);
if (count <= 3) {
printf("\nYou have failed.");
}
else if (count > 3 && count <= 8) {
printf("\nYou have passed.");
}
else {
printf("\nYou have got excellent marks.");
}
printf("\n\n\t\t\t\t\t\t\t\t\tTHANK YOU!!!");
return 0;
}
