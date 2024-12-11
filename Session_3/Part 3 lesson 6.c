#include <stdio.h>
int main(){
    float edge, height, area;
    printf("lenght of edge: ");
    scanf("%f", &edge);
    
    printf("lenght of height: ");
    scanf("%f", &height);
    
    area = (edge * height) / 2;
    
    printf("Area of the triangle = %.2f", area);
    
    return 0;
}
