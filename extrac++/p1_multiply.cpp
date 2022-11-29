#include <iostream>
using namespace std;

template <class T>
class Multiple {
   private:
    T num1, num2;

   public:
    Multiple(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
    }
    T multiply() { return num1 * num2; }
};

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";

    // stores two floating point numbers in num1 and num2 respectively
    cin >> num1 >> num2;
    Multiple<int> intCalc(num1, num2);


    cout << "Int results:" << endl;
    intCalc.displayResult();

    return 0;
}