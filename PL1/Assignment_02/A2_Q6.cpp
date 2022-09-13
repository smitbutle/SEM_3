/* Define a class String that could work as a user-defined string type. Include
constructors that will enable us to create an uninitialized string
String sl; //
string with length 0 and also to initialize an object with a string constant at
the time of creation like
String s2("Well done!");
Include a function that adds two strings to make a third string. Note that the
Statement
s2= s1;
will be perfectly reasonable expression to copy one string to another.
Write a complete program to test your class to see that it does the following
tasks:
(a) Creates uninitialized string objects.
(b) Creates objects with string constants.
(c) Concatenates two strings properly.
(d) Displays a desired string object.
 */

#include <iostream>
//#include <string.h>
#include <fstream>
using namespace std;

class String
{
public:
    string s;
    String()
    {
    }
    String(string str)
    {
        s = str;
    }

    String(const String &strcp)
    {
        s = strcp.s;
    }

    void display()
    {
        cout << "The desired string is : " << s << endl;
    }
};
string add(String &sa, String &sb)
{
    return sa.s + sb.s;
}
int main()
{
    String s1;
    s1.s = "Nice work, ";
    String s2("Well done!");
    s1.display();
    s2.display();
    cout << "After concatenation : " << add(s1, s2)<<endl;
    cout << "---------------------------" << endl;
    s1 = s2;
    cout << "After copy s2 to s1 by using 's1=s2' : "<<endl;
    s1.display();
    s2.display();
    cout << "After concatenation : " << add(s1, s2);

    return 0;
}