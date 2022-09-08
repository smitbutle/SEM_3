#include <iostream>

using namespace std;

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return (x * factorial(x - 1));
}

int main()
{
    int x;
    cout <<"---------------------\n"<< "Enter number: ";
    cin >> x;
    cout << "Factorial of " << x << " is " << factorial(x) <<"\n---------------------"<< endl;

    return 0;
}