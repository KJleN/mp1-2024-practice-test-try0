#include <limits.h>
/*include<stdio.h>*/
unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    if (a == 0 || b == 0) {
return 0;
} 
    if (a > UINT_MAX / b) {
        return UINT_MAX;
    } 
    else {
        return a * b;
    }
}

/*int main() {
    unsigned int a, b;
    printf("Введите два натуральных числа: ");
    scanf("%u %u", &a, &b)
    unsigned int product = product_of_two_numbers(a, b);
}*/
