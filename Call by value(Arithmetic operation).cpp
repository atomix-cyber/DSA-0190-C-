#include <iostream> 
using namespace std; 
int add(int x, int y) {
    return x + y;
}
int subtract(int x, int y) {
    return x - y;
}
int multiply(int x, int y) {
    return x * y;
}
int divide(int x, int y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Division by zero error!" << endl;
        return 0;  
    }
}
int main() {
    int a = 10, b = 3;
    cout << "Addition (a + b): " << add(a, b) << endl;
    cout << "Subtraction (a - b): " << subtract(a, b) << endl;
    cout << "Multiplication (a * b): " << multiply(a, b) << endl;
    cout << "Division (a / b): " << divide(a, b) << endl;
    return 0;
}
