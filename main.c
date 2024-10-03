#include <stdio.h>

int main() {
    int personAge;
    float yearlyEarnings;


    printf("Enter your age: ");
    scanf("%d", &personAge);

    printf("Enter your yearly earnings in Ksh: ");
    scanf("%f", &yearlyEarnings);


    if (personAge >= 21 && yearlyEarnings >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we can't offer you a loan at this time.\n");
    }

    return 0;
}
