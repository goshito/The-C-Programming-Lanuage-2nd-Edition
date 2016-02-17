#include <stdio.h>
//Fahr to celsius table over 20, using celsius = 5*(fahr-32)/9, p.25
int main() {
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("Fahrenheit:\tCelsius:\n");
    fahr = lower;
    while (fahr <= 300) {
        celsius = 5 * (fahr - 32) /9;
        printf("%d\t\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}