#include <stdio.h>

int main(){

    // switch = An alternative to using many if-else statements.
    //          More efficient with fixed integer values.

    char dayOfWeek = '\0';

    printf("Enter the day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &dayOfWeek);

    switch(dayOfWeek) {
        case 'M':
            printf("It is Monday\n");
            break;
        case 'T':
            printf("It is Tuesday\n");
            break;
        case 'W':
            printf("It is Wednesday\n");
            break;
        case 'R':
            printf("It is Thursday\n");
            break;
        case 'F':
            printf("It is Friday\n");
            break;
        case 'S':
            printf("It is Saturday\n");
            break;
        case 'U':
            printf("It is Sunday\n");
            break;
        default:
            printf("Please only enter a character .\n");
    }

    return 0;
}