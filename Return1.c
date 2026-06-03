#include <stdio.h>
// return = returns a value back to where you call a function

double cube(double num){
    return num * num * num;
}

double square(double num){

    return num * num;
}

int main() {

    double x = cube(2.1);
    double y = cube(3.2);
    double z = cube(4.3);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);
    
    return 0;
}