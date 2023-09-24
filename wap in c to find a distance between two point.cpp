#include <stdio.h>
#include <math.h>

double calculateDistance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    double x1, y1, x2, y2;
    
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double distance = calculateDistance(x1, y1, x2, y2);
    
    printf("The distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) is %.2lf\n", x1, y1, x2, y2, distance);
    
    return 0;
}

