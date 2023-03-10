#include <iostream>
using namespace std;
int main() {
    char op;
    double a, b, sum, zarb, taghsim, minus;

    cout << "Enter oprarator: ";
    cin >> op;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter b number: ";
    cin >> b;

    if(op == '+') {
        sum = a + b;
        cout << "operator is + and answer is : " << a << " + "<< b << " = " << sum;
    }else if(op == '-') {
        minus = a - b;
        cout << "operator is - and answer is : " << a << " - "<< b << " = " << minus;
    }else if(op == '*') {
        zarb = a * b;
        cout << "operator is * and answer is : " << a << " * "<< b << " = " << zarb;
    }else if(op == '/') {
        taghsim = a / b;
        cout << "operator is / and answer is : " << a << " / "<< b << " = " << taghsim;
    }else {
        cout << "(Error)operator does not exist!";
    }
    
    return 0; 
}
// we can use function or switch condition instead of if else
// created by Mohammad reza jahanbakhsh