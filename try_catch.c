#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;
int check = 0;

#define TRY if((check = setjmp(buf)) == 0)
#define CATCH(num) else if(check == num)
#define THROW(num) longjmp(buf, num)

double divide(double a, double b) {
    if (b == 0) {
        THROW(1);
    }
    return a / b;
}

void string(char array[], int length) {
    if (length < 0) {
        THROW(2);
    } else {
        for (int i = 0; i < length; i++) {
            printf("%c", array[i]);
        }
        printf("\n");
    }
}

int main() {
    double a = 10;
    double b = 2;
    char text[] = "Hello";
    
    TRY {
        printf("a / b = %lf\n", divide(a, b));
        string(text, -1);
    }
    CATCH(1) {
        printf("Error: divide by zero\n");
    }
    CATCH (2) {
        printf("Error: negative length\n");
    }
    
    return 0;
}