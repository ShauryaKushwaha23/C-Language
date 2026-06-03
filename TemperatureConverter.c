#include <stdio.h>
#include <math.h>

int main(){

// TEMPERATURE CONVERTER PROGRAM

char choice = '\0';
float fahrenheit = 0.0f;
float celsius = 0.0f;

printf("Temperature Conversion Calculator\n");
printf("C. Celsius to Fahrenheit (C to F)\n");
printf("F. Fahrenheit to Celsius (F to C)\n");
printf("Is the temperature in Celscius(C) or Fahrenheit (F)?: ");
scanf(" %c", &choice);

if(choice == 'C' || choice == 'c'){
     printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);
}
else if(choice == 'F' || choice == 'f'){
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit, celsius);
}
else {
    printf("Invalid choice. Please enter 'C' or 'F'.\n");
}        

    return 0;
}