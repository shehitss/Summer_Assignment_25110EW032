#include <stdio.h>

unsigned int factorial(unsigned int i) {
  
    if (i == 1) {
        return 1;
    }

    return i* factorial(i - 1);
}

int main() {
    int num = 9;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}