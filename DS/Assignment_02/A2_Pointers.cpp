#include <iostream>

using namespace std;

int main()
{
    int* ptr;
    int var;
    ptr=&var;
    cout<<"Enter any integer: ";
    cin>>var;
    cout<<"\nThe entered integer is "<<*ptr<<"\nAnd its address in memory is "<<ptr;
    
    return 0;
}