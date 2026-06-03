#include <iostream>
using namespace std;

int main() {
    // Different Data Types
    int a = 10;             // Integer
    float b = 5.5;          // Floating-point
    double c = 12.3456;     // Double precision
    char d = 'X';           // Character
    bool e = true;          // Boolean

    // Display data types
    cout << "Integer a = " << a << endl;
    cout << "Float b = " << b << endl;
    cout << "Double c = " << c << endl;
    cout << "Character d = " << d << endl;
    cout << "Boolean e = " << e << endl; // true prints as 1, false as 0

    // Operators
    int x = 20, y = 7;

    // Arithmetic operators
    cout << "\nArithmetic Operators:" << endl;
    cout << "x + y = " << (x + y) << endl;
    cout << "x - y = " << (x - y) << endl;
    cout << "x * y = " << (x * y) << endl;
    cout << "x / y = " << (x / y) << endl;
    cout << "x % y = " << (x % y) << endl;

    // Relational operators
    cout << "\nRelational Operators:" << endl;
    cout << "x > y : " << (x > y) << endl;
    cout << "x < y : " << (x < y) << endl;
    cout << "x == y: " << (x == y) << endl;
    cout << "x != y: " << (x != y) << endl;

    // Logical operators
    cout << "\nLogical Operators:" << endl;
    cout << "(x > 10 && y < 10) : " << (x > 10 && y < 10) << endl;
    cout << "(x > 10 || y > 10) : " << (x > 10 || y > 10) << endl;
    cout << "!(x > y) : " << !(x > y) << endl;

    // Assignment operators
    cout << "\nAssignment Operators:" << endl;
    int z = 5;
    cout << "z = " << z << endl;
    z += 3;
    cout << "z += 3 -> " << z << endl;
    z *= 2;
    cout << "z *= 2 -> " << z << endl;

    return 0;
}
