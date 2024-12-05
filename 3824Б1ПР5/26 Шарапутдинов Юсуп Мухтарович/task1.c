#include <limits.h>
/*#include<stdio,h>*/
int sum_of_two_numbers(int a, int b) {
  if (b > 0 && a > INT_MAX - b) {
    return INT_MAX;
  }
  if (b < 0 && a < INT_MIN - b) {
    return INT_MIN;
  }
  return a + b;
}

//Если нужно также выводить  сумму, добавляем: 

/*int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    printf("Введите два целых числа: ");
    scanf_s("%d %d", &a, &b);
    int sum = sum_of_two_numbers(a, b);
    printf("Сумма: %d\n", sum);
    return 0;
}*/
