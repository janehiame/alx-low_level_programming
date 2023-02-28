#include "main.h"
/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
#include <stdio.h>

void print_int(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    if (n >= 10) {
        print_int(n / 10);
    }
    _putchar(n % 10 + '0');
}

int max(int a, int b, int c) {
    int m = a;
    if (b > m) {
        m = b;
    }
    if (c > m) {
        m = c;
    }
    return m;
}

int main() {
    int a = 42;
    int b = 17;
    int c = 99;
    int m = max(a, b, c);
    print_int(m);
    _putchar('\n');
    return 0;
}

