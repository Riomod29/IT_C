#include <stdio.h>
int main() {
    float Celsius, Fahrenheit;
    printf("°C = ");
    scanf("%f", &Celsius);
    Fahrenheit = (Celsius * 9/5) + 32; 
    printf("%.2f °C = %.2f °F", Celsius, Fahrenheit);
    return 0;
}
