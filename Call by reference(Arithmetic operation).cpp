#include <iostream> 
using namespace std;  
void add(int &x, int &y, int &result) {
    result = x + y;
}
void subtract(int &x, int &y, int &result) {
    result = x - y;
}
void multiply(int &x, int &y, int &result) {
    result = x * y;
}
void divide(int &x, int &y, int &result) {
    if (y != 0) {
        result = x / y;
    } else {
        cout << "Division by zero error!" << endl;
    }
}
int main() {
    int a = 10, b = 3, result;
    add(a, b, result);
    cout << "Addition (a + b): " << result << endl;
    subtract(a, b, result);
    cout << "Subtraction (a - b): " << result << endl;
    multiply(a, b, result);
    cout << "Multiplication (a * b): " << result << endl;
    divide(a, b, result);
    cout << "Division (a / b): " << result << endl;
    return 0;
}
