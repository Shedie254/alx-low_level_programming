#include <stdio.h>

/**
* main - causes an infinite loop
* Description: printf is used to show an incoming loop
* and also show the loop has been exited
* \\o/\n - Is used to show exit to the loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
