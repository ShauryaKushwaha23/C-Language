#include <stdio.h>

int main(){

// if statement = Do some code if a condition is true.
//                If the condition is false, don't do it.

    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 65){
        printf("You are a senior citizen.\n");
    }     
    else if(age >= 18){
        printf("You are an adult.\n");
    }    
    else if(age < 0){
        printf("Age cannot be negative.\n");
    } 
    else if(age == 0){
        printf("You are a newborn\n");
    } 

    else{
        printf("You are not an adult.\n");
    }


return 0;
}