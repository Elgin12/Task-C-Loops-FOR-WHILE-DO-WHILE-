//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    int current, previous;

    printf("Enter a number: ");
    scanf("%d", &previous);

    do {
        printf("Enter a number: ");
        scanf("%d", &current);

        if (current < previous) {
            printf("Number is smaller than previous. Stopping.\n");
            break;
        }

        previous = current;

    } while (current >= previous);

    return 0;
}

