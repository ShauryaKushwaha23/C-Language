#include <stdio.h>
#include <string.h>
// while loop = Continue some code WHILE the condition remains true
//              Condition must be true for us to enter while loop
int main() {

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    return 0;
}