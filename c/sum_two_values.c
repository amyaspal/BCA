// sum of two value

#include <stdio.h>
#include <conio.h>

int main() {
    int num_people, toes, total_toes = 0;

    printf("Enter the number of people: ");
    scanf("%d", &num_people);

    for (int i = 1; i <= num_people; i++) {
        printf("Enter the number of toes for person %d: ", i);
        scanf("%d", &toes);
        total_toes += toes;
    }

    printf("The total number of toes is: %d\n", total_toes);

    return 0;
}
