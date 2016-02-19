//19, Line Counting 
#include <stdio.h>

//count lines in input, I added curly brackets
int main() {
    int c, nl;
    
    nl = 0;
    while ((c = getchar()) != EOF) {
        if ((c == getchar()) != '\n') {
            ++nl;            
        }        
    }
    printf("%d\n", nl);
    return 0;
}