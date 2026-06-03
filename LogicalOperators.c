#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    bool isSunny = true;

    if(!isSunny){
        printf("It is CLOUDY outside");
    }
    else{
        printf("It is SUNNY outside ");
    }

    return 0;
}