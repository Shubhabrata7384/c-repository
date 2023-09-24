#include <stdio.h>
#include <math.h>

int main() {
    double side_length, area;
    
    
    printf("Enter the length of a side of the regular hexagon: ");
    scanf("%lf", &side_length);
    
    area = (3 * sqrt(3) * side_length * side_length) / 2;
    
    
    printf("The area of the regular hexagon is: %lf\n", area);
    
    return 0;
}

