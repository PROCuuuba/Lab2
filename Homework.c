#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;

    puts("Введите сторону A");
    scanf("%lf", &a);

    puts("Введите сторону B");
    scanf("%lf", &b);

    double S = a * b;
    double P = 2 * (a + b);

    printf("S = %lf, P = %lf\n", S, P);
}