#include <stdio.h>
//celsius to fahr table over 20, using celsius = 5*(fahr-32)/9, p.25 2nd ver with float
int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("Celsius:\tFahreinheit:\n");
    celsius = lower;
    while (celsius <= 300) {
        fahr = celsius * 9.0/5.0 + 32.0;
        printf("%.1f\t\t%.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}