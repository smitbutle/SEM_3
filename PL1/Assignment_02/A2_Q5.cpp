/* Calculate area of Box (Length, Breadth, Height). Consider Height as static
member (Need to initialize). Use static member function getHeight() which
will return value of Height. Create function Area() which will calculate area
of Box. Use parameterized constructor to initialize data (insert data from
keyboard). Create two objects */

#include <iostream>
using namespace std;

class Box
{   
public:

    int Length, Breadth;
    static int Height;

    static int  getHeight()
    {
        return Height;
    }

    int Area(int a, int b)
    {
        return 2*(Height*a + Height*b + a*b);
    }
    Box(int l, int b)
    {
        Length = l;
        Breadth = b;
        
    }
};

void input(int &l, int &b)
{
    cout << "Enter Length: ";
    cin >> l;
    cout << "Enter Breadth: ";
    cin >> b;
}

int Box::Height;

int main()
{   
    cout<<"---------------------------"<<endl;
    int l, b;
    cout<<"Enter height of boxes: ";
    cin>>Box::Height;
    
    

    cout<<". . . . . . . . . . . . . ."<<endl;
    input(l, b);
    Box b1(l, b);
    cout << "\nTotal surface area of the box 1 is " << b1.Area(l, b) << " sq units." << endl;
    cout << "Height of the box 1 is " << Box::getHeight() << " units." << endl;
    cout<<"---------------------------"<<endl;

    input(l, b);
    Box b2(l, b);
    cout << "\nTotal surface area of the box 2 is " << b1.Area(l, b) << " sq units." << endl;
    cout << "Height of the box 2 is " << Box::getHeight() << " units." << endl;
    cout<<"---------------------------"<<endl;

    return 0;
}