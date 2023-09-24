#include <stdio.h>

int main() {
    double size_kb, size_mb, size_gb, size_tb;

    printf("Enter the size in kilobytes (KB): ");
    scanf("%lf", &size_kb);

    
    size_mb = size_kb / 1024.0;  
    size_gb = size_mb / 1024.0;  
    size_tb = size_gb / 1024.0;  

    
    printf("%.2lf KB is equal to %.2lf MB\n", size_kb, size_mb);
    printf("%.2lf KB is equal to %.2lf GB\n", size_kb, size_gb);
    printf("%.2lf KB is equal to %.2lf TB\n", size_kb, size_tb);

    return 0;
}

