#include <stdio.h>

int main(){

// Format Specifier = Special tokens that begin with a % symbol,
//                    followed by a character that specifies the data type 
//                    and optional modifiers (width, precision, flags).
//                    They control how data is displayed or interpreted.

//int age = 25;
//float price = 19.99;
//double pi = 3.1415926535;
//char currency = '$';
//char name[] = "Alice";

//printf("%d\n", age);
//printf("%f\n", price);
//printf("%lf\n", pi);
//printf("%c\n", currency);
//printf("%s\n", name);

// width

//int num1 = 1;
//int num2 = 10;
//int num3 = -100;

//printf("%3d\n", num1);
//printf("%-4d\n", num2);
//printf("%05d\n", num3);

// precision

float price1 = 19.99;
float price2 = 1.50;
float price3 = -100.00;

printf("%+7.2f\n", price1);
printf("%+7.2f\n", price2);
printf("%+7.2f\n", price3);

return 0;

}