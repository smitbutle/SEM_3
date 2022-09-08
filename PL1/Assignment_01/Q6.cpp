/* Write a program in CPP to swap 2 numbers without using any temporary variable. */
#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    x = x + y;
    y = x - y;
    // y=x; x=x+y;
    x = x - y;
    // x=y; [swap successful]
}

int main()
{
    int a, b;
    cout << "\nEnter first number :";
    cin >> a;
    cout << "Enter second number :";
    cin >> b;
    swap(a, b);
    cout << "\n[After swap]\nFirst number :" << a << "\nSecond number :" << b << "\n\n";
    return 0;
}
