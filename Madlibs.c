#include <stdio.h>
#include <string.h>

int main(){

// MAD LIBS GAME

char noun[50] = "";
char verb[50] = "";
char adjective1[50] = "";
char adjective2[50] = "";
char adjective3[50] = "";

printf("Enter an adjective (description): ");
fgets(adjective1, sizeof(adjective1), stdin);
adjective1[strlen(adjective1) - 1] = '\0'; // Remove newline character

printf("Enter a noun (animal or person): ");
fgets(noun, sizeof(noun), stdin);
noun[strlen(noun) - 1] = '\0'; // Remove newline character

printf("Enter an adjective (description): ");
fgets(adjective2, sizeof(adjective2), stdin);
adjective2[strlen(adjective2) - 1] = '\0'; // Remove newline character

printf("Enter a verb (endin with -ing): ");
fgets(verb, sizeof(verb), stdin);
verb[strlen(verb) - 1] = '\0'; // Remove newline character

printf("Enter an adjective (description): ");
fgets(adjective3, sizeof(adjective3), stdin);
adjective3[strlen(adjective3) - 1] = '\0'; // Remove newline character

printf("\nTodayI went to a %s zoo.\n", adjective1);
printf("I saw a %s.\n", adjective2, noun);
printf("It was %s and %s.\n", adjective2, adjective3);
printf("I love %s at the zoo.\n", verb);
printf("I can't wait to go back!\n");

return 0;

}