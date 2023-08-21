#include <stdarg.h>
#include <stdio.h>

void print_numbers(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int val = va_arg(args, int);
        printf("%d ", val);
    }

    printf("\n");
    va_end(args);
}

double average(int count, ...) {
    va_list args;
    va_start(args, count);

    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, double);
    }

    va_end(args);
    return sum / count;
}

void print_values(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int int_val = va_arg(args, int);
        double double_val = va_arg(args, double);
        char *string_val = va_arg(args, char*);

        printf("Int: %d, Double: %.2f, String: %s\n", int_val, double_val, string_val);
    }

    va_end(args);
}

int main() {
    print_numbers(3, 10, 20, 30);
    printf("Average = %.2f \n", average(3, 10.5, 20.5, 30.5));
    print_values(1, 10, 20.5, "Hello");
    return 0;
}
