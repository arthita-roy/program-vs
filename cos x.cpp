#include <stdio.h>

int main() {
    double x, term, sum = 1;
    int i, sign = -1;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    term = x * x; // x^2

    for (i = 2; i <= 10; i += 2) {
        double fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += sign * (term / fact);
        term *= x * x;  // increase power (x^4, x^6, etc.)
        sign *= -1;     // alternate signs
    }

    printf("cos(x) ˜ %.4lf\n", sum);
    return 0;
}

