/*#include <stdio.h>
#include<locale.h>*/
#include <math.h>

double max_of_two_numbers(double a, double b) {
    return fmax(a, b);
}

/*int main() {
    setlocale(LC_ALL, "RUSSIAN");
    double a, b;
    printf("Введите два вещественных числа: ");
    scanf_s("%lf %lf", &a, &b);
    double max_num = max_of_two_numbers(a, b);
    printf("Максимум: %lf\n", max_num);
    return 0;
}*/ 
