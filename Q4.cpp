/*Write a CPP Program to Check given number is Super Prime number or not using
function.( Super prime number is one whose all digits are prime and number is also
prime)*/
#include <iostream>
using namespace std;

int check_SuperPrime(int x)
{
    if (x == 0 || x == 1)
        return 0;

    int arr[4] = {2, 3, 5, 7};
    int check = x;

    while (check > 0)
    {
        int temp;
        temp = check % 10;
        for (int i = 0; i < 4; i++)
        {
            if (temp == arr[i])
                break;
            else if (i == 3)
                return 0;
        }
        check = check / 10;
    }

    for (int j = 2; j < x; j++)
    {
        if (x % j == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int x;
    cout << "-------------------" << endl;
    cout << "Enter Number : ";
    cin >> x;
    if (check_SuperPrime(x) == 1)
        cout << "It is a superprime number.\n";
    else
        cout << "It is not a superprime number.\n";
    cout << "-------------------" << endl;
    return 0;
}
