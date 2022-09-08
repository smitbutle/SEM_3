/*Write a program to read 3 values of a, b and c and calculate value of X as

X= a*b – c/d
Where d=a+b*/
#include <iostream>
using namespace std;
float calculate(float &a, float &b, float &c)
{
    return (a * b) - (c / (a + b));
}

int main()
{
    cout << "-------------------" << endl;
    cout << "Enter a,b,c values: ";
    float a, b, c;
    cin >> a >> b >> c;
    cout << "[Ans] : " << calculate(a, b, c) << endl;
    cout << "-------------------" << endl;
    return 0;
}
