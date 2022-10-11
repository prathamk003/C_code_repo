#include <stdio.h>
#include <string.h>

struct states {
char name[30];
char zone[30];
char capital[30];
long long int population;
long int area;
char language[30];
};

void info(struct states *p);
void display(struct states t[30], int n);
void part_state(struct states t[30]);
void acc_zone(struct states t[30]);
void high_pop(struct states t[30]);
void high_area(struct states t[30]);

int main() {
struct states s[30], *o;
int choice;
o = &s;

info(o);
printf("***************** KNOW ABOUT INDIA *****************");
do {
printf("\n\n\n1. Information about particular state");
printf("\n2. States according to zones");
printf("\n3. Find state with highest population");
printf("\n4. Find state with highest area");
printf("\n5. Exit");
printf("\nEnter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
part_state(s);
break;
case 2:
acc_zone(s);
break;
case 3:
high_pop(s);
break;
case 4:
high_area(s);
break;
case 5:
return 0;
default:
printf("\nInvalid choice");
break;
}
} while (choice != 0);

return 0;
}

void info(struct states *p) {
strcpy((p + 0)->name, "Andhra Pradesh");
strcpy((p + 0)->zone, "Southern");
strcpy((p + 0)->capital, "Amaravati");
(p + 0)->population = 49506799;
(p + 0)->area = 160205;
strcpy((p + 0)->language, "Telugu");

strcpy((p + 1)->name, "Arunachal Pradesh");
strcpy((p + 1)->zone, "North-Eastern");
strcpy((p + 1)->capital, "Itanagar");
(p + 1)->population = 1383727;
(p + 1)->area = 83743;
strcpy((p + 1)->language, "English");

strcpy((p + 2)->name, "Assam");
strcpy((p + 2)->zone, "North-Eastern");
strcpy((p + 2)->capital, "Dispur");
(p + 2)->population = 31205576;
(p + 2)->area = 78550;
strcpy((p + 2)->language, "Assamese");

strcpy((p + 3)->name, "Bihar");
strcpy((p + 3)->zone, "Eastern");
strcpy((p + 3)->capital, "Patna");
(p + 3)->population = 104099452;

(p + 3)->area = 94163;
strcpy((p + 3)->language, "Hindi");

strcpy((p + 4)->name, "Chhattisgarh");
strcpy((p + 4)->zone, "Central");
strcpy((p + 4)->capital, "Raipur");
(p + 4)->population = 25545198;
(p + 4)->area = 135194;
strcpy((p + 4)->language, "Chhattisgarhi");

strcpy((p + 5)->name, "Goa");
strcpy((p + 5)->zone, "Western");
strcpy((p + 5)->capital, "Panaji");
(p + 5)->population = 1458545;
(p + 5)->area = 3702;
strcpy((p + 5)->language, "Konkani");

strcpy((p + 6)->name, "Gujarat");
strcpy((p + 6)->zone, "Western ");
strcpy((p + 6)->capital, "Gandhinagar");
(p + 6)->population = 60439692;
(p + 6)->area = 196024;
strcpy((p + 6)->language, "Gujarati");

strcpy((p + 7)->name, "Haryana");
strcpy((p + 7)->zone, "Northern");
strcpy((p + 7)->capital, "Chandigarh");
(p + 7)->population = 25351462;
(p + 7)->area = 44212;
strcpy((p + 7)->language, "Hindi");

strcpy((p + 8)->name, "Himachal Pradesh");
strcpy((p + 8)->zone, "Northern");
strcpy((p + 8)->capital, "Shimla");
(p + 8)->population = 6864602;
(p + 8)->area = 55673;
strcpy((p + 8)->language, "Hindi");

strcpy((p + 9)->name, "Jharkhand");
strcpy((p + 9)->zone, "Eastern");
strcpy((p + 9)->capital, "Ranchi");
(p + 9)->population = 32988134;
(p + 9)->area = 74677;
strcpy((p + 9)->language, "Hindi");

strcpy((p + 10)->name, "Karnataka");
strcpy((p + 10)->zone, "Southern");
strcpy((p + 10)->capital, "Bangalore");
(p + 10)->population = 61095297;
(p + 10)->area = 191791;
strcpy((p + 10)->language, "Kannada");

strcpy((p + 11)->name, "Kerala");
strcpy((p + 11)->zone, "Southern");
strcpy((p + 11)->capital, "Thiruvananthapuram");
(p + 11)->population = 33406061;
(p + 11)->area = 38863;
strcpy((p + 11)->language, "Malayalam");

strcpy((p + 12)->name, "Madhya Pradesh");

strcpy((p + 12)->zone, "Central");
strcpy((p + 12)->capital, "Bhopal");
(p + 12)->population = 72626809;
(p + 12)->area = 308252;
strcpy((p + 12)->language, "Hindi");

strcpy((p + 13)->name, "Maharashtra");
strcpy((p + 13)->zone, "Western");
strcpy((p + 13)->capital, "Mumbai");
(p + 13)->population = 112374333;
(p + 13)->area = 307713;
strcpy((p + 13)->language, "Marathi");

strcpy((p + 14)->name, "Manipur");
strcpy((p + 14)->zone, "North-Eastern");
strcpy((p + 14)->capital, "Imphal");
(p + 14)->population = 2855794;
(p + 14)->area = 22347;
strcpy((p + 14)->language, "Meitei");

strcpy((p + 15)->name, "Meghalaya");
strcpy((p + 15)->zone, "North-Eastern");
strcpy((p + 15)->capital, "Shillong");
(p + 15)->population = 2966889;
(p + 15)->area = 22720;
strcpy((p + 15)->language, "English");

strcpy((p + 16)->name, "Mizoram");
strcpy((p + 16)->zone, "North-Eastern");
strcpy((p + 16)->capital, "Aizawl");

(p + 16)->population = 1097206;
(p + 16)->area = 21081;
strcpy((p + 16)->language, "English");

strcpy((p + 17)->name, "Nagaland");
strcpy((p + 17)->zone, "North-Eastern");
strcpy((p + 17)->capital, "Kohima");
(p + 17)->population = 1978502;
(p + 17)->area = 16579;
strcpy((p + 17)->language, "English");

strcpy((p + 18)->name, "Odisha");
strcpy((p + 18)->zone, "Eastern");
strcpy((p + 18)->capital, "Bhubaneswar");
(p + 18)->population = 41974218;
(p + 18)->area = 155820;
strcpy((p + 18)->language, "Odia");

strcpy((p + 19)->name, "Punjab");
strcpy((p + 19)->zone, "Northern");
strcpy((p + 19)->capital, "Chandigarh");
(p + 19)->population = 27743338;
(p + 19)->area = 50362;
strcpy((p + 19)->language, "Punjabi");

strcpy((p + 20)->name, "Rajasthan");
strcpy((p + 20)->zone, "Northern");
strcpy((p + 20)->capital, "Jaipur");
(p + 20)->population = 68548437;
(p + 20)->area = 342269;

strcpy((p + 20)->language, "Hindi");

strcpy((p + 21)->name, "Sikkim");
strcpy((p + 21)->zone, "North-Eastern");
strcpy((p + 21)->capital, "Gangtok");
(p + 21)->population = 610577;
(p + 21)->area = 7096;
strcpy((p + 21)->language, "English");

strcpy((p + 22)->name, "Tamil Nadu");
strcpy((p + 22)->zone, "Southern");
strcpy((p + 22)->capital, "Chennai");
(p + 22)->population = 72147030;
(p + 22)->area = 130058;
strcpy((p + 22)->language, "Tamil");

strcpy((p + 23)->name, "Telangana");
strcpy((p + 23)->zone, "Southern");
strcpy((p + 23)->capital, "Hyderabad");
(p + 23)->population = 35193978;
(p + 23)->area = 114840;
strcpy((p + 23)->language, "Telugu");

strcpy((p + 24)->name, "Tripura");
strcpy((p + 24)->zone, "North-Eastern");
strcpy((p + 24)->capital, "Agartala");
(p + 24)->population = 3673917;
(p + 24)->area = 10492;
strcpy((p + 24)->language, "Bengali");

strcpy((p + 25)->name, "Uttar Pradesh");
strcpy((p + 25)->zone, "Central");
strcpy((p + 25)->capital, "Lucknow");
(p + 25)->population = 199812341;
(p + 25)->area = 243286;
strcpy((p + 25)->language, "Hindi");

strcpy((p + 26)->name, "Uttarakhand");
strcpy((p + 26)->zone, "Central");
strcpy((p + 26)->capital, "Dehradun");
(p + 26)->population = 10086292;
(p + 26)->area = 53483;
strcpy((p + 26)->language, "Hindi");

strcpy((p + 27)->name, "West Bengal");
strcpy((p + 27)->zone, "Eastern");
strcpy((p + 27)->capital, "Kolkata");
(p + 27)->population = 91276115;
(p + 27)->area = 88752;
strcpy((p + 27)->language, "Bengali");
}

void display(struct states t[30], int n) {
printf("\n\nState: %s", t[n].name);
printf("\nZone: %s", t[n].zone);
printf("\nCapital: %s", t[n].capital);
printf("\nPopulation: %lld", t[n].population);
printf("\nArea: %ld km^2 ", t[n].area);
printf("\nOfficial language: %s", t[n].language);
}

void part_state(struct states t[30]) {
int flag = 0, i;
char x[30];
printf("\nEnter the state you want to know about: ");
scanf("%s", x);
for (i = 0; i < 28; i++) {
if (strcmp(t[i].name, x) == 0) {
flag = 1;
break;
}
}
if (flag == 1) {
display(t, i);
} else {
printf("\nInvalid Entry");
}
}

void acc_zone(struct states t[30]) {
printf("\n\nStates in Northern zone: ");
for (int i = 0; i < 28; i++) {
if (strcmp(t[i].zone, "Northern") == 0) {
printf("\n%s", t[i].name);
}
}
printf("\n\nStates in Southern zone: ");
for (int i = 0; i < 28; i++) {
if (strcmp(t[i].zone, "Southern") == 0) {
printf("\n%s", t[i].name);

}
}
printf("\n\nStates in Eastern zone: ");
for (int i = 0; i < 28; i++) {
if (strcmp(t[i].zone, "Eastern") == 0) {
printf("\n%s", t[i].name);
}
}
printf("\n\nStates in Western zone: ");
for (int i = 0; i < 28; i++) {
if (strcmp(t[i].zone, "Western") == 0) {
printf("\n%s", t[i].name);
}
}
printf("\n\nStates in Central zone: ");
for (int i = 0; i < 28; i++) {
if (strcmp(t[i].zone, "Central") == 0) {
printf("\n%s", t[i].name);
}
}
printf("\n\nStates in North-Eastern zone: ");
for (int i = 0; i < 28; i++) {
if (strcmp(t[i].zone, "North-Eastern") == 0) {
printf("\n%s", t[i].name);
}
}
}

void high_pop(struct states t[30]) {
int max = 0, i, j;

for (i = 0; i < 28; i++) {
if (t[i].population > max) {
max = t[i].population;
}
}
for (j = 0; j < 28; j++) {
if (t[j].population == max) {
break;
}
}
printf("\nThe state with highest population is %s", t[j].name);
}

void high_area(struct states t[30]) {
int max = 0, i, j;
for (i = 0; i < 28; i++) {
if (t[i].area > max) {
max = t[i].area;
}
}
for (j = 0; j < 28; j++) {
if (t[j].area == max) {
break;
}
}
printf("\nThe state with highest area is %s", t[j].name);)
}
