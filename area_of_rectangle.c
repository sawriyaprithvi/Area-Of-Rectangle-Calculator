#include <stdio.h>

int main() {
    int length, breadth;
    
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    
    int area = length * breadth;
    
    printf("The area of the rectangle is: %d\n", area);
    
    return 0;
}
