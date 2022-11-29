
// C++ program to implement
// function templates
#include <iostream>
using namespace std;
  
// Function template to swap
// two numbers
template <class T>
int swap_numbers(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
  
// Driver code
int main()
{
    int num1, num2;
    cout << "NUM1 : ";
    cin >> num1;
    cout << "NUM2 : ";
    cin >> num2;
  
    // Invoking the swap()
    swap_numbers(num1, num2);
    cout <<"NUM1 : "<< num1 << " " << " and NUM2 :" << num2 << endl;
    return 0;
}