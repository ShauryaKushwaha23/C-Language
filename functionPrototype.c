#include <stdio.h>
#include <stdbool.h>

// function prototype = Provide the compiler with information about a functions's:
//                      name, return type, and parameters before it's actual definition.
//                      Enables type checkin and alllows functions to be used before
//                      they are defined.
//                      Improves readability, organization, and helps prevent errors.  

void hello(char name[], int age); // Function Prototype
bool ageCheck(int age);

int main(){

    hello("Spongebob", 30); 
    
    if(ageCheck(30)){
        printf("You are old enough to work at the Krusty Krab");
    }
    else{
        printf("You must be 16+ to work at the Krusty Krab");
    }

    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n, name");
    printf("You are %d years old");
}

bool ageCheck(int age){
    return age >= 16;
}