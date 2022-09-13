/* Create a class Customer (Cid, Cname, Age, City). Make all the members as
private. Use parameterized constructor to assign values to it. Display all
Customer information. (Add at least 5 records)
 */
#include <iostream>

using namespace std;

class Customer
{
private:
    int Cid, Age;
    string Cname, City;

public:
    Customer(int cid, string cname, int age, string city)
    {
        Cid = cid;
        Cname = cname;
        Age = age;
        City = city;
    }
    void display()
    {
        cout << "Customer Id: " << Cid << "." << endl;
        cout << "Customer Name: " << Cname << "." << endl;
        cout << "Customer Age: " << Age << "." << endl;
        cout << "Customer City: " << City << "." << endl;
        cout<<"---------------------------"<<endl;
    }
};

int main()
{
    Customer c1(1, "Smit", 19, "Nagpur");
    Customer c2(2, "Akash", 22, "Sangli");
    Customer c3(3, "Shreya", 20, "Mumbai");
    Customer c4(4, "Rohit", 31, "Kolhapur");
    Customer c5(5, "Parth", 28, "Delhi");
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    return 0;
}