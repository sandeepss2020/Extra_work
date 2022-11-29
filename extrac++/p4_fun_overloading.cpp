// Program to compute absolute value
// Works for both int and float

#include <iostream>
using namespace std;

// function with float type parameter
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}

void absolute(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

int main() {
    int num1;
    float num2;

    cout << "Enter any integer number: ";
    cin >> num1;

    cout << "Enter any Float number: ";
    cin >> num2;

    
    // call function with int type parameter
    cout << "Absolute value is = " << absolute(num1) << endl;

    // call function with float type parameter
    cout << "Absolute value  = " << absolute(num2) << endl;

    // call function with 2 parameters
    absolute(num1, num2);
    return 0;
}