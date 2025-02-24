#include <stdio.h>
int main ()

int count_digit_occurrences(int n, int digit) {
    int count = 0;
    while (n != 0) {
        if (n % 10 == digit) {
            count++;
        }
        n /= 10;
    printf("The digit %d appears %d times in the number %d.\n", digit, occurrences, n);
    return 0;
}
