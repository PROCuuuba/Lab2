#include <stdio.h>

#define inchD 2.54
#define inchP 2.32166
#define inchS 2.7076

#define mileS 1.852
#define mileL 1.609
#define mileR 1475
#define mileOldR 7.468
#define mileG 7412.6

float results(int dym) 
{
    float resultDym;
    resultDym = inchD * dym;
    return resultDym;
}

int main() 
{
    // Задание 1
    int numA, numB;

    puts("Введите число A");
    scanf("%d", &numA);
    printf("Введено число A = %d\n", numA);

    puts("Введите число B");
    scanf("%d", &numB);
    printf("Введено число B = %d\n", numB);

    printf("Cложение = %d + %d = %d\n", numA, numB, numA + numB);
    printf("Cложение = %d - %d = %d\n", numA, numB, numA - numB);
    printf("Cложение = %d * %d = %d\n", numA, numB, numA * numB);
    printf("Cложение = %d / %d = %d\n", numA, numB, numA / numB);


    // Задание 2
    int dym, result;
    float resultDym;

    puts("Расчет английского дюйма\nВведите количество дюймов");
    scanf(" %d", &dym);

    resultDym = results(dym);   
    printf("%d дюймов - это %.1f см\n", dym, resultDym);

    puts("Расчет испанского дюйма\nВведите количество дюймов");
    scanf(" %d", &dym);

    resultDym = inchP * dym;

    printf("%d дюймов - это %.1f см\n", dym, resultDym);

    puts("Расчет старолитовского дюйма\nВведите количество дюймов");
    scanf(" %d", &dym);

    resultDym = inchS * dym;

    printf("%d дюймов - это %.1f см\n", dym, resultDym);


    // Задание 2А
    double mile;
    double resultMile;

    puts("Введите количество морских миль");
    scanf(" %lf", &mile);

    resultMile = mileS * mile;

    printf("%lf миль = %lf км", mile, resultMile);

    puts("Введите количество сухопутных миль");
    scanf(" %lf", &mile);

    resultMile = mileL * mile;

    printf("%lf миль = %lf км\n", mile, resultMile);

    puts("Введите количество римских миль");
    scanf(" %lf", &mile);

    resultMile = mileR * mile;

    printf("%lf миль = %lf км\n", mile, resultMile);

    puts("Введите количество старорусских миль");
    scanf(" %lf", &mile);

    resultMile = mileOldR * mile;

    printf("%lf миль = %lf км\n", mile, resultMile);

    puts("Введите количество географических миль");
    scanf(" %lf", &mile);

    resultMile = mileG * mile;

    printf("%lf миль = %lf км\n", mile, resultMile);
    

    // Задание 3
    double a, b;

    puts("Введите значение A");
    scanf("%lf", &a);

    puts("Введите значение B");
    scanf("%lf", &b);

    double mul = a * b;
    double sum = a + b;
    double sub = a - b;

    printf(" _______________________ \n");
    printf("| a * b | a + b | a - b |\n");
    printf(" ----------------------- \n");
    printf("| %-.0lf * %-.0lf | %-.0lf + %-.0lf | %-.0lf - %-.0lf |\n", a, b, a, b, a, b);
    printf(" ----------------------- \n");
    printf("|   %-.0lf   |   %-.0lf   |   %-.0lf   |", mul, sum, sub);
}