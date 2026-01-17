//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Enter first positive number: ");
    scanf("%d", &A);

    printf("Enter second positive number: ");
    scanf("%d", &B);

    while (B != 0) {
        temp = B;
        B = A % B;
        A = temp;
    }

    printf("GCD = %d\n", A);

    return 0;
}

