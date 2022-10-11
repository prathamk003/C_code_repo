#include <stdio.h>
#include <string.h>

int main() {
  char password[30];
  int length=0, spchar=0, digit=0, alpha=0, i;
  printf("The password should contain \natleast one digit \natleast one special character \natleast one capital letter \nshould be of 6 to 12 letters \n");
  printf("Enter the Password: ");
  scanf("%s", password);
	length = strlen(password);
	if ( length < 6 ||  length > 12) {
	    length = 1;
	}
	else {
	    for (i=0; password[i]!= '\0'; i++) {
	        if ( password[i] >= 'A' && password[i] <= 'Z' ) {
	            alpha = 0;
	 			      break;
	        }
	 		    else { alpha = 1; }
	    }
	    for (i=0; password[i]!= '\0'; i++) {
			    if ( password[i]>='0' && password[i] <='9') {
			        digit = 0;
			 	      break;
			    }
			    else { digit = 1; }
	    }
	    for (i=0; password[i]!= '\0'; i++) {
			    if (password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='&' || password[i]=='*' || password[i]=='%' || password[i]=='^') {
			        spchar=0;
				      break;
			    }
			    else { spchar = 1; }
		  }
	}
	if (length == 1) {
		printf("Length Mismatched \n");
	}
	if (alpha == 1) {
		printf("There is no capital letter \n");
	}
	if (spchar == 1) {
		printf("Special character is missing \n");
	}
	if (digit == 1) {
		printf("No Digits in password \n");
	}
	if ( length == 1 || alpha == 1 ||  digit== 1 || spchar == 1 ) {
		printf("Wrong Password \n");
	}
	else {
		printf("Password entered successfully \n");
	}
	return 0;
}
