#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, y, z;
    double a, b, beta;
    printf("Введите x, y и z: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    a = sqrt(10 * (cbrt(x) + pow(x, y + 2)));
    b = pow(asin(z), 2) - fabs(x - y);
    beta = a * b;
    printf("x = %g, y = %g, z = %g\n", x, y, z);
    printf("beta = %.6f\n", beta);
    return 0;
}
