#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf buf;

void banana(void);
void apple(void);

int main(void)
{
    int val = setjmp(buf);

    printf("in main()\n");
    printf("This is our menu\n");
    printf("1. Banana\n");
    printf("2. Apple\n");

    int choice;
    scanf("%d", &choice);
    if (choice == 1)
        banana();
    else if (choice == 2)
        apple();
    else
        printf("invalid choice\n");

    return 0;
}

void banana(void)
{
    printf("in banana()\n");
    printf("press ESC to go back to menu\n");
    int choice;
    while (1)
    {
        choice = getchar();
        if (choice == 27)
            longjmp(buf, 1);
    }
}

void apple(void)
{
    printf("in apple()\n");
    printf("press ESC to go back to menu\n");
    int choice;
    while (1)
    {
        choice = getchar();
        if (choice == 27)
            longjmp(buf, 1);
    }
}


