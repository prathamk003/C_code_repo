#include <stdio.h>

int main() {
	int a[10][10],b[10][10],o[10][10], c[10][10] ,r1,c1,r2,c2,i,j,k;
  printf("Enter number of rows and columns for first array: ");
  scanf("%d %d", &r1, &c1);
  printf("Enter number of rows and columns for second array: ");
  scanf("%d %d", &r2, &c2);
  printf("Enter elements into first array: ");
  for(i=0; i<r1; i++) {
    for(j=0; j<c1; j++) {
    	scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements into second array: ");
  for(i=0; i<r2; i++) {
    for(j=0; j<c2; j++) {
    	scanf("%d", &b[i][j]);
		}
		printf("\n");
	}
  if (r1==r2 && c1==c2) {
    for(i=0;i<r1; i++) {
    	for(j=0; j<c1; j++) {
    		o[i][j] = a[i][j] + b[i][j];
    	}
		  printf("\n");
	  }
	printf("the adddition is : \n");
    for(i=0; i<r1; i++) {
    	for(j=0; j<c1; j++) {
    	  printf("%d ", o[i][j]);
		  }
		  printf("\n");
	  }
	}
  else {
    printf("Addition is not possible.");
  }
  if(r1==c2) {
    for(i= 0; i<r1; i++) {
      for(j=0; j<c2; j++) {
        c[i][j]=0;
        for(k=0; k<c1; k++) {
            c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
        }
        printf("\n");
      }
    }
    printf("The multiplication is \n");
    for(i=0; i<r1; i++) {
      for(j=0; j<c2; j++) {
          printf("%d ", c[i][j]);
      }
      printf("\n");
    }
  }
  else {
    printf("Multiplication is not possible");
  }
  return 0;
}
