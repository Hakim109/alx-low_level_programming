#include <stdio.h>
/**
* _islower - check if c is lowercase
* @c: carctere to check
* Return: 1 if c is lowercase, 0 otherwise.
*/
void print_to_98(int n)
{
	    if (n <= 98) {
        for (; n <= 98; n++) {
            printf("%d", n);
            if (n != 98) {
                printf(", ");
            }
        }
    } else {
        for (; n >= 98; n--) {
            printf("%d", n);
            if (n != 98) {
                printf(", ");
            }
        }
    }
    printf("\n");
}
