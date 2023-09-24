#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, side3;
    double s, area;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    
    s = (side1 + side2 + side3) / 2.0;

    
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    
    if (area > 0) {
        printf("The area of the triangle is: %.2lf\n", area);
    } else {
        printf("Invalid input. The sides do not form a triangle.\n");
    }

    return 0;
}

