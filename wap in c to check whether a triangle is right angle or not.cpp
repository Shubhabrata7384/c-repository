#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, hypotenuse;


    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);

    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);

    printf("Enter the length of the hypotenuse: ");
    scanf("%lf", &hypotenuse);

    if ((pow(side1, 2) + pow(side2, 2) == pow(hypotenuse, 2)) ||
        (pow(side1, 2) + pow(hypotenuse, 2) == pow(side2, 2)) ||
        (pow(side2, 2) + pow(hypotenuse, 2) == pow(side1, 2))) {
        printf("It is a right-angled triangle.\n");
    } else {
        printf("It is not a right-angled triangle.\n");
    }

    return 0;
}

