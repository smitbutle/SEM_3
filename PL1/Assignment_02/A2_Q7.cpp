/* Write a function power to raise a number m to a power n. The function takes 
a double value for m and int value for n and returns the result correctly. Use a 
default value of 2 for n to make the function to calculate squares when this 
argument is omitted. Write a function that performs the operation as above 
but asks an int value for m. Both the functions should have the same name. 
Write a main that calls both the functions. Use the concept of function overloading. */

#include <iostream>
#include<cmath>
using namespace std;

double power(double m, int n){
    return pow(m,n);
}
double power(double m){
    return pow(m,2);
}

int main()
{   
    int check;
    cout<<"//When single parameter '6' is passed in function call -- "<<power(6,check)<<endl;
    cout<<"//When two parameters '6 and 3' are passed in function call -- "<<power(6,3)<<endl;
    return 0;
}