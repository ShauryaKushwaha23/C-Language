#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           Helps complex types and improves code readability

    //           typedef existing_type new_name;

    // typedef existing_type new_name

    Initials user1 = "BC";
    Initials user2 = "ss";
    Initials user3 = "kp";
    Initials user4 = "pt";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}