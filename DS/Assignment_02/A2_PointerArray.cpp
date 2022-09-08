#include <iostream>

using namespace std;
void display(int *p)
{

    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i + 1 << " is : " << *(p + i) << endl;
    }
}
int main()
{
    int arr[5];
    cout << "Enter 5 integers separated by space: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "-------------------" << endl;
    int *ptr;
    ptr = &arr[0];

    display(ptr);

    return 0;
}