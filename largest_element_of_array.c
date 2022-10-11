#include <stdio.h>

int main() {
    int i, n, arr[n], c = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter values into array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The values you entered are: ");
    for (i = 0; i < n; i++) {
        printf("\t%d", arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > c) {
            c = arr[i] ;
        }
    }
    printf("\nLargest element of array is: %d", c);
    return 0;
}
