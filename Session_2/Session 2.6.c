#include <stdio.h>

int main()
{
    const float PI = 3.14;
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    float perimeter = 2 * PI * radius, area = PI * radius * radius;
    printf("perimeter of circle = %.2f\n", perimeter);
    printf("area of circle = %.2f", area);
    return 0;
}
